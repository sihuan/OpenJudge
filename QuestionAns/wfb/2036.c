#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isEven(char n[])
{
    int is = 1;
    int i = strlen(n)-1;
    if((n[i]-'0')%2) is = 0;
    return is;
}
int main()
{
    char n[1005] = {0,};
    while(scanf("%s",&n) != EOF)
    {
        if(isEven(n))
            printf("Even\n");
        else
            printf("Odd\n");
        memset(n,0,sizeof(char)*1005);
    }

    return 0;
}

/**************************************************************
	Problem: 2036
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

