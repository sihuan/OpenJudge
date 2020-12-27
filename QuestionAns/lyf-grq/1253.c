#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    int len,k;
    scanf("%s",&a);
    len=strlen(a);
    scanf("%d",&k);
    if(k<=len)
    printf("%c",a[k-1]);
    else
    printf("error");
    return 0;
}

/**************************************************************
	Problem: 1253
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

