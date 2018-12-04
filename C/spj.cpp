#include<cstdio>
#include<cstring>

FILE *inf, *outf, *ansf;

int main(int argc, char **argv)
{
    inf = fopen(argv[1], "r");//样例输入
    ansf = fopen(argv[2], "r");//样例输出
    outf = fopen(argv[3], "r");//用户输出
    int a1,h1,c1,a2,h2;
    fscanf(inf,"%d%d%d%d%d",&h1,&a1,&c1,&h2,&a2);
    char ans[100],res[100],a[100]="Pegasus",b[100]="Burn";
    int n1,n2;
    if(fscanf(outf,"%d",&n1)==NULL)
        return 1;
    fscanf(ansf,"%d",&n2);
    if(n1!=n2)//用户次数与样例不同WA
        return 1;
    for(int i=0;i<n1;i++)
    {
        if(fscanf(outf," %s",res)==EOF)
            return 1;
        if(strcmp(res,a)==0)
        {
            h2-=a1; 
            if (h2 <= 0) break;
            h1-=a2;
            if(h1<=0)//过程中猎人死了WA
                return 1;
            fscanf(outf," %s",res);
            if(strcmp(res,"Ryuseiken!!!!"))//样列一定要对
                return 1;
        }
        else if(strcmp(res,b)==0)
        {
            h1-=a2,h1+=c1;
            fscanf(outf," %s",res);
            if(strcmp(res,"my"))
                return 1;
            fscanf(outf," %s",res);
            if(strcmp(res,"calories!!!!"))
                return 1;
        }
    }
    if(h1<=0||h2>0)//最后猎人死了或者怪物没死WA
        return 1;
    return 0;//最后AC
}