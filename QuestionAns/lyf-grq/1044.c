#include <stdio.h>
#include <stdlib.h>

int main()

{   int M=1,n,h,j,sum=0;
    while(M!=0)
   {

               scanf("%d",&n);

        if(n==0)
            M=0;
        else{M=1;
               sum=0;

        for(h=1;h<=n;h++)
        {
            scanf("%d",&j);
            sum+=j;


        }
        printf("%d\n",sum);}
           }}

/**************************************************************
	Problem: 1044
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

