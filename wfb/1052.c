#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 1005
int ReadArray(int a[])
{
    int i;
    int n;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%d",a+i);
    }
    return n;
}
void Add(int a[],int b[],int n)
{
    int i;
    for(i=0; i<n; ++i)
        a[i] += b[i];
}
void Print(int *a,int n)
{
    int cnt=0;
    int i;
    for(i=0; i<n; ++i)
    {
        if(cnt++)
            putchar(' ');
        printf("%d",a[i]);
    }
    putchar('\n');
}
int main()
{
    int *a,*b;
    int length;
    int length1;
    int length2;
    int n;
    scanf("%d",&n);
    int i;
    a = (int *)malloc(sizeof(int)*MAXSIZE);
    memset(a,0,sizeof(int)*MAXSIZE);
    length1 = ReadArray(a);
    for(i=0; i<n-1; ++i)
    {
        b = (int *)malloc(sizeof(int)*MAXSIZE);
        memset(b,0,sizeof(int)*MAXSIZE);
        length2 = ReadArray(b);
        if(length1 < length2)
            length = length2;
        else
            length = length1;
        Add(a,b,length);
        Print(a,length);
        a = b;
        length1 = length2;
    }
    Print(a,length1);

    return 0;
}

/**************************************************************
	Problem: 1052
	User: 201601011420
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:880 kb
****************************************************************/

