#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m;
while(scanf("%d",&n)!=EOF)
{
if(n<0||n>100)
printf("Error\n");
else
{m=n/10;
switch(m)
{
case 10:
case 9:printf("Excellent\n");
break;
case 8:printf("Good\n");
break;
case 7:printf("Average\n");
break;
case 6:printf("Pass\n");
break;
default:printf("Failing\n");}
}
}
}

/**************************************************************
	Problem: 1025
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

