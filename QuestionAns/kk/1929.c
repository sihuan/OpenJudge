#include<stdio.h>
int main()
{
    int n,s=1;
    double up,down,flag,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        up=1.0;
        down=2.0;
        flag=1.0;
        for(int i=1;i<=n;i++)
        {
            sum+=flag*up/down;
            flag*=-1;
            up+=2;
            down+=2;
        }
        printf("Case %d : %.2lf\n",s,sum);
        s++;
    }
}

/**************************************************************
	Problem: 1929
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

