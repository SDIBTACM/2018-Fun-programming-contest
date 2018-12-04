#include <stdio.h>

int main(){
    long long n, x, y, x2, y2;
    scanf("%lld%lld%lld%lld", &x, &y, &x2, &y2);
    long long res = (y2 - y + 1) * (x2 - x + 1);
    if (res%2 && x%2+y%2 == 1)
        res++;
    printf("%lld\n", res/2);
    return 0;
}
