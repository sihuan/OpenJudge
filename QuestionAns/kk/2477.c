#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   if(b==0)printf("Exception: / by zero");
   else printf("%d\n%d",a/b,a%b);
}

/**************************************************************
	Problem: 2477
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

