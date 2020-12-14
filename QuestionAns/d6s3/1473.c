#include<stdio.h>

int digits(int n)
{
    int a=0;
    if (n==0)
        return 1;
    while(n!=0){
        n/=10;
        a++;
    }
    return a;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

