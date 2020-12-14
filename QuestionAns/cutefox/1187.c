#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int judge(char str[])
{
    int num = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
         num = num  + (int)(str[i] - '0');
    }
    if(num%3==0)
    return 1;
    else
    return 0;
}
int main()
{
    int M,i,c;
    scanf("%d",&M);
    getchar();
    for(i=1;i<=M;i++)
    {
        char a[1000]={0};
        gets(a);
        c=judge(a);
        if(c==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

