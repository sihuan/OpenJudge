#include<stdio.h>
#include<string.h>
 int main()
 {
    int i,n,a;
    char str1[1100];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
      gets(str1);
     printf("case %d:length=%d.\n",i,strlen(str1));
    }
 }

/**************************************************************
	Problem: 1149
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

