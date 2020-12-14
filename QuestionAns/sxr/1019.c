#include <stdio.h>

int main()
{
    int b,k,m,n,i=1,a=0;
    int s[150];
    scanf("%d %d %d",&k,&m,&n);
    while(i<=k)
     {
        if((i%m==0&&i%n!=0)||(i%n==0&&i%m!=0))
        {
          s[a]=i;
          a++;
        }
        i++;
    }
    for(b=0;b<a-1;b++)
        printf("%d ",s[b]);
    printf("%d",s[a-1]);
    return 0;
}

/**************************************************************
	Problem: 1019
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

