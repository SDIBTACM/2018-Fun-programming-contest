#include <stdio.h>
 int main() {
    int i, h1, a1, c1, h2, a2, cou = 0, g = 0;
    int ans[200010] = {0};
     scanf("%d %d %d %d %d", &h1, &a1, &c1, &h2, &a2);
     while (h2 > 0) {
        if (h1 <= a2) {
            if (a1 >= h2) {
                cou++;
                ans[g++] = 2;
                break;
            } else {
                h1 += c1;
                ans[g++] = 1;
            }
        } else {
            h2 -= a1;
            ans[g++] = 2;
        }
         h1 -= a2;
        cou++;
    }
     printf("%d\n", cou);
     for (i = 0; i < g; i++) {
        if (ans[i] == 1) {
            printf("Burn my calories!!!!\n");
        } else {
            printf("Pegasus Ryuseiken!!!!\n");
        }
    }
    return 0;
}
