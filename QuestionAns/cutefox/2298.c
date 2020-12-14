#include <stdio.h>
#include <stdlib.h>
int add(int n)
{
    int sum,a,b;
    scanf("%d%d",&a,&b);
    if(n==1)
       {
          sum=a+b;
         printf("%d\n",sum);
    }
    else
       {
          sum=a+b;
    printf("%d\n",sum);
          add(n-1);
       }
}



int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

/**************************************************************
	Problem: 2298
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

