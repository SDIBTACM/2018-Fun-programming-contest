#include<stdio.h>
#include<stdlib.h>

int main()
{
    int w,m,n,x1,y1,x2,y2;
    scanf("%d%d%d",&w,&n,&m);
    x1=(m-1)/w+1;//利用排列规律算出两个房间分别在第几行第几列，之后坐标差求和。
    y1=(m-1)%w+1;
    if(x1%2==0)
        y1=w-y1+1;//注意当前行排列顺序
    x2=(n-1)/w+1;
    y2=(n-1)%w+1;
    if(x2%2==0)
        y2=w-y2+1;
    printf("%d\n",abs(x1-x2)+abs(y1-y2)+1);//一定不要忘记当前所在的房间。
}
