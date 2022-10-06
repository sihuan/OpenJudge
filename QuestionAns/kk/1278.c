#include <stdio.h>
#include <stdlib.h>
int is_daffodil(int n)
{
    if(n<100||n>999)
    return 0;
    int a,b,s;
    s=n;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    if(a*a*a+b*b*b+n*n*n==s)
    return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
/**************************************************************
	Problem: 1278
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

