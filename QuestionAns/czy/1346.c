#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 10009
void swap(unsigned long long int *a,unsigned long long int *b)
{
    unsigned long long temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//数学大法贼牛逼
int main()
{
    unsigned long long int  m,n,x;
   // printf("%lf",1.0*36/16);
    while(~scanf("%llu%llu%llu",&m,&n,&x))
    {
         int  i=0;
            unsigned long long a ,temp;
            for(i=0;i<x;++i)
            {
                scanf("%llu",&a);
                m=m-n*a;
                {
                    swap(&m,&n);
                }
            }
            if(n==0) puts("YES");
            else puts("NO");

    }
}

/**************************************************************
	Problem: 1346
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

