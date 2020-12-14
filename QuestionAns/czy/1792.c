#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_STR_LEN 1009


int main()
{
    int x;
    int i,k;
    int n;
    scanf("%d",&n);
    int nn=n;
    n=2*n-1;
    int m=1;
    int flag=0;
    for(i=-n/2; i<=n/2; ++i)
    {
        for(k=-n/2; k<=n/2; ++k)
        {

            if(k==0 || i==0) printf("1");
            else if(abs(i)+abs(k)<=n/2)
            {

                if(k<0)
                {
                     printf("%d",nn-m);
                    ++m;
                    flag=1;
                }
                else
                {
                     printf("%d",nn-m+1);
                    //if(flag=1) {++m;flag=0;}
                    --m;
                }
            }

            else printf(" ");

        }
        m=1;
        puts("");
    }
}

/**************************************************************
	Problem: 1792
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

