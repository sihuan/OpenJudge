#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   int len=2*n-1;
   for(int i = 0;i<len;++i){
   for(int j = 0;j<len;++j){
    if(i==n-1||j==n-1) printf("+");
    else printf(" ");
   }
   printf("\n");
   }
    return 0;
}

/**************************************************************
	Problem: 2685
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

