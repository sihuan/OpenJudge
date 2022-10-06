#include<stdio.h>
int add(int n)
{
    if(n==0)
        return;
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    add(n-1);
}


int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

/**************************************************************
	Problem: 2298
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

