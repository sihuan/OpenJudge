#include<stdio.h>
int main()
{
    int m,n,i=0,s,j;
    int pr1,pr2,pr3;
    scanf("%d",&m);
    n=m;
    if(m==0)
        printf("%d",m);
    while(n>0)
    {
        n/=10;
        i++;
    }
    if(i%2==0)
    {
        for(s=1,j=1;j<=i/2;j++)
            s*=10;
        pr1=m/s;
        pr2=m%s;
        printf("%d %d",pr1,pr2);
    }
    if(i%2==1)
    {
        for(s=1,j=1;j<=(i-1)/2;j++)
            s*=10;
        pr1=m/s/10;
        pr2=m/s%10;
        pr3=m%s;
        printf("%d %d %d",pr1,pr2,pr3);
    }
}

/**************************************************************
	Problem: 2129
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

