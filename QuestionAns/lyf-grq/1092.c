#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char str[101];
   int len,i;
   scanf("%s",&str);
   len=strlen(str);
   for(i=len-1;i>=0;i--)
   {
       printf("%c",str[i]);
   }
}

/**************************************************************
	Problem: 1092
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

