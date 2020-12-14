#include <stdio.h>
#define MAX_STR_LEN 109

int yy(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;++i)
    {
        int y,m,d;
        scanf("%d-%d-%d",&y,&m,&d);
        int k,sum=0;
        if(m==2&&d==29)
        {
            printf("-1\n");
        }
        else
        {
            if(m>=3)
            {
                for(k=y+1; k<=18+y; ++k)
                {
                    if(yy(k)==1) sum=sum+366;
                    else sum=sum+365;
                }
            }
            else if(m<=2)
            {
                for(k=y;k<=y+17;++k)
                {
                    if(yy(k)) sum=sum+366;
                    else sum=sum+365;
                }
            }

            printf("%d\n",sum);
        }
}
}

/**************************************************************
	Problem: 1310
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

