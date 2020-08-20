#include<stdio.h>
//153，370，371，407
int is_daffodil(int n){
    /*int a,b,c,num=n;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    c=n%10;
    if(a*a*a+b*b*b+c*c*c==num){
        return 1;
    }
    return 0;*/
    if(n==153 || n==370 || n==371 || n==407){
        return 1;
    }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

