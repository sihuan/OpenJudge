#include <stdio.h>
int main()
{
    int m, n, x;
    float r;
    scanf("%d %d %d",&m, &n ,&x);
    r = m*x;
    if(r>n){
        r = 0.88*r;
    }
    printf("%.2f",r);
    return 0;
}
/**************************************************************
	Problem: 1009
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

