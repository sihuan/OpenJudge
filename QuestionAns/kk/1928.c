#include<stdio.h>
int main()
{    long long k,n,i;
    scanf("%lld%lld",&k,&n);
if(k>=-2147483648&&k<=2147483647)
{if(n>0)
{   printf("%lld",k);
    for(i=1;i<=n-1;i++)
       {
 if(k+i<=2147483647)
            {


        printf(" %lld",k+i);
            }
}
}
  if(n<0)
{
    for(i=n+1;i<=-1;i++)
       {
 if(k+i>=-2147483648)

        printf("%lld ",k+i);

       }
       printf("%lld",k);
}
}
}

/**************************************************************
	Problem: 1928
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

