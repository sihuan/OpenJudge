#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=0,sum=0,first=0,end=0,i=0,k=0,j=0;
    char a[30];
    char temp[30];
    scanf("%s",a);
    while(scanf("%s",temp)!=EOF)
    {
        if(i>=5)
        {
            printf("Out of limited!\n");
            continue;
        }
        if(strcmp(a,temp)==0)
        {
            printf("Welcome!\n");
        }
        else
        {
            printf("Wrong!\n");
            ++i;
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1093
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

