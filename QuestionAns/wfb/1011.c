#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char ch;
    int sum = 0;
    while(1)
    {
        int n = 0;
        scanf("%d",&n);
        sum += n;
        ch = getchar();
        if(ch ==';') break;

    }
    printf("%d\n",sum);
    return 0;
}

/**************************************************************
	Problem: 1011
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

