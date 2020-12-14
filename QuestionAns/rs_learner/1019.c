#include<stdio.h>
int main()
{
    int k,m,n,i,min;
    scanf("%d%d%d",&k,&m,&n);
    if(m>n)
        min=n;
    else
        min=m;
    printf("%d",min);
    for(i=min+1;i<=k;i++)
    {
        if((i%m==0&&i%n!=0)||(i%m!=0&&i%n==0))
            printf(" %d",i);
    }
    return 0;
}
/**************************************************************
	Problem: 1019
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

