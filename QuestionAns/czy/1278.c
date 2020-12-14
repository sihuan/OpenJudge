#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_daffodil(n)
{
    if(n>=1000 || n<=99) return 0;
    int a=0,b=0,c=0;
    a=(n/100);
    b=(n/10)%10;
    c=n%10;
    if(a*a*a+b*b*b+c*c*c==n)
    {
        return 1;
    }
    else
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

