#include <stdio.h>
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
    int a,b,c;
  scanf("%d%d",&a,&b);
  c=gcd(a,b);
  printf("%d %d",c,a*b/c);
 return 0;
}

/**************************************************************
	Problem: 1298
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

