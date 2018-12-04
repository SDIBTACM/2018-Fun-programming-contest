#include <stdio.h>
#include <math.h>

#define maxn 40020
int cnt[20010];
int a[10001];
int prime[maxn];

int isHaveOne(int n) {
    if (cnt[1] == 0)
        return 0;
    for (int i = 0; i < n; i++)
        if (prime[a[i] + 1] == 0 && a[i] != 1)
            return cnt[1] + 1;
    return cnt[1] == 1 ? 0 : cnt[1];
}

int main() {
    prime[1] = 1;
    for (int i = 2; i < maxn; i++)
        if (!prime[i])
            for (int j = i * i; j < maxn; j += i)
                prime[j] = 1;

    int n;
    while (~scanf("%d", &n)) {
        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
            cnt[a[i]]++;
        }
        int res = isHaveOne(n);
        for (int i = 0; res == 0 && i < n; i++)
            for (int j = 0; res == 0 && j < i; j++)
                if (prime[a[i]+a[j]] == 0)
                    res = 2;
        printf("%d\n", res);
    }
    return 0;
}
