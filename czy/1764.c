#include <stdio.h>
int n=0;
int m=0;
int sum=0;
int fx()
{
    int i;
    if(n==m)
    {
        return 0;
    }
    scanf("%d",&i);
    sum=sum+i;
    ++m;
    fx();
}

int main()
{
    int i,j,k;
    scanf("%d",&n);
    fx();
    printf("%d",sum);
    return 0;
}

/**************************************************************
	Problem: 1764
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

