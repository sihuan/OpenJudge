#include <stdio.h>
#include <string.h>

int main()
{
    int mid=0,sma=0,big=0,sma2;
    int temp=0,n=0,m=0,sum=0,i,j,k,chicks=0,money=0,y;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
while(scanf("%d,%d,%d/%d,%d,%d",&big,&mid,&sma,&sma2,&money,&chicks)!=EOF)
    {
        int flag=1;
        int flag2=0;
       // printf("%d",money);
        int q=money/big;
        int w=money/mid;
        for(i=0;i<=chicks;++i)
        {
            j=sma2*(money-mid*chicks-big*i+mid*i)/(sma-mid*sma2);
            y=chicks-i-j;
                if(i>=0&&j>=0&&y>=0 && big*sma2*i+mid*sma2*y+sma*j==sma2*money)
                {
                    flag2=1;
                    if(flag==1)
                    {
                        printf("COCKS,HENS,CHICKS\n");
                        flag=0;
                    }
                    printf("%d,%d,%d\n",i,y,j);

                }
        }
        if(flag2==0) printf("Cannot buy!\n");
        printf("\n");
    }
}

/**************************************************************
	Problem: 1046
	User: 201601160202
	Language: C
	Result: Accepted
	Time:136 ms
	Memory:748 kb
****************************************************************/

