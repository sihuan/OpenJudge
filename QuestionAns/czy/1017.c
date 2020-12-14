#include<stdio.h>
#include<string.h>

int main()
{
    char a1[30];
    char a2[30];
    gets(a1);
    gets(a2);
    int l1=strlen(a1);
    int l2=strlen(a2);
    if(l1>=l2)
    {
        printf("%s\n",a1);
        printf("%s\n",a2);
    }
    else
    {
        printf("%s\n",a2);
        printf("%s\n",a1);
    }
    return 0;
}

/**************************************************************
	Problem: 1017
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

