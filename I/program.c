/**
 * 想拿奖吗？先来掷个骰子！
 * 题解: 排序后直接根据规则模拟比较即可
 * 
 * Dear maintainer:
 * Once you are done trying to 'optimize' this routine, and have realized what a
 * terrible mistake that was, please increment the following counter as a warning
 * to the next guy, total_wasted_here: 0
 * @author jiaying created on 09/11/2018.
 */

#include <stdio.h>

#define LARGEST 3           // 豹子
#define SECOND_LARGEST 2    // 顺子
#define THIRD_LARGEST 1     // 对子
#define SMALLEST 0          // 点子

#define WIN 666             // 获胜
#define LOSE 555            // 失败
#define DRAW 999            // 平局

/**
 * 获取摇到的骰子的牌型
 */
int getDiceType(int dice[]) {
    // 豹子
    if (dice[0] == dice[1] && dice[0] == dice[2]) {
        return LARGEST;
    }
    // 顺子
    if (dice[0] - dice[1] == 1 && dice[1] - dice[2] == 1) {
        return SECOND_LARGEST;
    }
    // 对子
    if (dice[0] == dice[1] || dice[1] == dice[2]) {
        return THIRD_LARGEST;
    }
    // 点子
    return SMALLEST;
}

/**
 *  交换两个数
 */
void swap(int* x_addr, int* y_addr) {
    int temp = *x_addr;
    *x_addr = *y_addr;
    *y_addr = temp;
}

/**
 * 从大到小排序手上的牌型
 */
void sortDice(int dice[]) {
    if (dice[0] < dice[1]) {
        swap(&dice[0], &dice[1]);
    }
    if (dice[0] < dice[2]) {
        swap(&dice[0], &dice[2]);
    }
    if (dice[1] < dice[2]) {
        swap(&dice[1], &dice[2]);
    }
}

/**
 * 比较两个点数
 */
int compareTwoDicePoint(int diceA, int diceB) {
    if (diceA > diceB) {
        return WIN;
    } else if (diceA < diceB) {
        return LOSE;
    } else {
        return DRAW;
    }
}

/**
 * 比较两者的牌型
 */
int doCompare(int diceForA[], int diceForB[]) {
    int diceTypeOfA = getDiceType(diceForA);
    int diceTypeOfB = getDiceType(diceForB);

    // 先比较牌型, 牌型一样的时候比较点数
    if (diceTypeOfA > diceTypeOfB) {
        return WIN;
    } else if (diceTypeOfA < diceTypeOfB) {
        return LOSE;
    } else {
        int result;
        if (diceTypeOfA == THIRD_LARGEST && diceForA[1] != diceForB[1]) {
            result = compareTwoDicePoint(diceForA[1], diceForB[1]);
        } else {
            for (int i = 0; i < 3; i++) {
                result = compareTwoDicePoint(diceForA[i], diceForB[i]);
                if (result != DRAW) {
                    break;
                }
            }
        }
        return result;
    }
}

int main(int argc, char const *argv[])
{
    int testCase;
    int diceForA[3], diceForB[3];

    scanf("%d", &testCase);
    for (int _case = 0; _case < testCase; _case++) {
        for (int i = 0; i < 3; i++) {
            scanf("%d", &diceForA[i]);
        }
        sortDice(diceForA);

        for (int i = 0; i < 3; i++) {
            scanf("%d", &diceForB[i]);
        }
        sortDice(diceForB);

        int result = doCompare(diceForA, diceForB);
        puts(result == WIN ? "RED" : (result == LOSE ? "BLUE" : "DRAW"));
    }
    return 0;
}
