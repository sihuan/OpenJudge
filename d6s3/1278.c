#include<stdio.h>

int is_daffodil(int n)
{
    int a,b,c;
    if(n<100||n>999)
        return 0;
    a=n/100;
    b=(n%100)/10;
    c=n%100%10;
    if (a*a*a+b*b*b+c*c*c==n)
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

