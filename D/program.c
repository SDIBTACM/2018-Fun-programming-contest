#include <stdio.h>
#include <math.h>
//只有相邻的两个点斜率才可能是最大
double max(double a,double b){return a>b?a:b;}
int main(){

    double MaxK,x,y;        //当前点
    double frontX,frontY;   //前一个点
    int n;

    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%lf%lf",&x,&y);
        if(i!=0)
            MaxK = max(MaxK,(y-frontY)/(x-frontX));
        frontX = x;
        frontY = y;
    }
    printf("%.2lf\n",MaxK);
    return 0;
}
