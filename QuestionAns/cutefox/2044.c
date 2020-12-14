#include <stdio.h>
#include<stdlib.h>
int main()
{
    int useless,a,sum=0,sum2=0;
    double x;
    scanf("%d",&useless);
    while(scanf("%d",&a)!=EOF)
    {
   if(a>0)
    sum=sum+a;
   else
    sum2=sum2-a;
    }
if(sum<sum2)
    puts("Yes");
    else
    puts("No");
    return 0;
}

/**************************************************************
	Problem: 2044
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

