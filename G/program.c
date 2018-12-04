#include <stdio.h>
#include <stdlib.h>

int num[10000005];
//找规律,对于一个长为n的数组,第i和第n-i-1个点互换(2x+1)次和互换一次等价,互换2x次和不换等价
int main()
{
    int n;
    scanf("%d", &n);
    int i;

    for (i = 0; i < n; i++) scanf("%d", &num[i]);
    int flag = 1;
    for (i=0;i < n/2;i++) {
        if (flag) {
            int temp = num[i]; //互换
            num[i] = num[n-i-1];
            num[n-i-1] = temp;
        }
        flag = !flag;
    }
    for (i = 0; i < n; i++) printf("%d ", num[i]);
    return 0;
}
