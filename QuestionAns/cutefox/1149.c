#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,cnt,j;
    scanf("%d",&n);
    getchar();
char str[1001];
for(i=0;i<n;i++)
{
    gets(str);
    for(j=0;str[j]!='\0';j++);
    printf("case %d:length=%d.\n",i+1,j);
}
    return 0;
}

/**************************************************************
	Problem: 1149
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

