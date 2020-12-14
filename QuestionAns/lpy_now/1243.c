#include<stdio.h>

int main(){
    double m;
    int b;
    scanf("%lf",&m);
    b=(int)m;
    if(m>=0){
        printf ("+ ");
    }
    if(m<0)
    {
        printf ("- ");
        b=-b;
        m=-m;
    }
    printf("%d %lg",b,m-b);
    return 0;
}
/**************************************************************
	Problem: 1243
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

