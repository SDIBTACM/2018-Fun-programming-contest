#include <stdio.h>
#include <math.h>

int main()
{
    double px,py,ans1,ans2;
    scanf("%lf%lf",&px,&py);
    ans1=(4.0*px*py)/3.0;     //二次函数所占面积
    ans2=3.0*px*px*sqrt(3)/4.0;       //半个六边形所占面积
    printf("%.2lf %.2lf\n",ans1,ans2);
    return 0;
}
