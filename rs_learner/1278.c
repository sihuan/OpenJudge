#include<stdio.h>
int is_daffodil(int n)
{
    int a,b,c,result;
    a=n/100;
    b=n/10-10*a;
    c=n%10;
    if(n<=100||n>=1000)
        return 0;
    else
    {
        result=a*a*a+b*b*b+c*c*c;
    if(result==n)
        return 1;
    else
        return 0;
    }
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

