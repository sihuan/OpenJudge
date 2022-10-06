#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
char *to_str(unsigned long long n)
{
    char *num=NULL;
    num=malloc(sizeof(char)*1000);
    if(n==0)
    {
        num[0]='0';
        num[1]='\0';
        return num;
    }
    int i=0,j;
    char t;
    while(n>0)
    {
        num[i]=n%10+48;
        n/=10;
        i++;
    }
    num[i]=0;
    for(i--,j=0;i>=j;i--,j++)
    {
        t=num[i];
        num[i]=num[j];
        num[j]=t;
    }
    return num;
}

int main()
{
    char *s;
    unsigned long long n;
    scanf("%llu", &n);
    s = to_str(n);
    puts(s);
    free(s);
}

/**************************************************************
	Problem: 2519
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

