#include <stdio.h>
#include <stdlib.h>


int main()
{
int N;
scanf("%d",&N);
int i,j,k;
for(j=0;j<(N+1)/2;j++)
{
for(i=0;i<(N+1)/2-1-j;i++)
printf(" ");
for(k=j;k<j*3+1;k++)
printf("%c",'A'+k);
printf("\n");
}
for(j=(N+1)/2-2;j>=0;j--)
{
for(i=(N+1)/2-2-j;i>=0;i--)
printf(" ");
for(k=j;k<j*3+1;k++)
printf("%c",'A'+k);
printf("\n");
}
 return 0;
}
/**************************************************************
	Problem: 1221
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

