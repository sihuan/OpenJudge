#include<stdio.h>
int main()
{
    int k,m,n,i;
    scanf("%d%d%d",&k,&m,&n);
    if(m!=n)
    {
        if(m>n)
            i=n;
        else i=m;
            printf("%d",i);
            i++;
        while(i<=k)
        {
            if((i%m==0)&&(i%n!=0)||(i%n==0)&&(i%m!=0))
                printf(" %d",i);
            i++;
        }
    }
}
/**************************************************************
	Problem: 1019
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

