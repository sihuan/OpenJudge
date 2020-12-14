#include <stdio.h>
int main()
 {
            int a,m,n,i;
            int flag=1;
            scanf("%d%d%d",&a,&m,&n);
            for(i=1;i<=a;++i)
            {
                if((i%m==0 || i%n==0) && (i%m+i%n!=0))
                {
                    if(flag)
                    {
                        printf("%d",i);
                        flag=0;
                    }
                    else
                    {
                        printf(" %d",i);
                    }
                }
            }
            return 0;
       }

/**************************************************************
	Problem: 1019
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

