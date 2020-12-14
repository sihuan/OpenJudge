#include <stdio.h>
#include <stdlib.h>

int is_daffodil(int n)
{
    int g,s,b;
    if(n<100||n>999)
        return 0;
    g=n%10;
    b=n/100;
    s=(n-100*b)/10;
    long long int sum;
    sum=g*g*g+s*s*s+b*b*b;
    if(sum==n)
        return 1;
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
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

