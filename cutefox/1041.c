#include <stdio.h>
#include <stdlib.h>
int gcd(int m,int n)
{
   if(m%n==0)
        return n;
   else{
    return gcd(n,m%n);
   }
}
int main()
{
    int a,b,c,d,temp;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>b){
        temp=a;
        a=b;
        b=temp;
        }
        c=gcd(a,b);
        d=a*b/c;
        printf("%d %d\n",c,d);
    }
    return 0;
}

/**************************************************************
	Problem: 1041
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

