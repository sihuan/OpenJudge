#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 10005

void Print(int a[],int n,int st,int ed)
{
    int temp;
    if(st>ed)
    {
        temp = st;
        st = ed;
        ed = temp;
    }
    if(st<1) st=1;
    if(ed>n) ed=n;
    int i;
    int cnt = 0;
    for(i=st-1; i<ed; ++i)
    {
        ++cnt;
        if(cnt > 1) putchar(' ');
        printf("%d",a[i]);
    }
    if(!cnt) printf("OUT OF RANGE");
    putchar('\n');
}
void ReadA(int a[],int n)
{
    int i;
    for(i=0; i<n; ++i)
        scanf("%d",a+i);
}

int main()
{
    int array[MAX_SIZE];
    int n;
    scanf("%d",&n);
    ReadA(array,n);
    int st,ed;
    while(scanf("%d%d",&st,&ed) != EOF)
    {
        Print(array,n,st,ed);
    }

    return 0;
}

/**************************************************************
	Problem: 1468
	User: 201601011420
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:748 kb
****************************************************************/

