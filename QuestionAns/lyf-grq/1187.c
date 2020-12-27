#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    int M,i,j,s,sum;
    char str[101];
    scanf("%d",&M);
    for(i=1; i<=M; i++)
    {
        scanf("%s",&str);
        sum=0;
        for(j=0;j<strlen(str);j++)
        {
            sum+=(str[j]-48);
        }
        if(sum%3==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1187
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

