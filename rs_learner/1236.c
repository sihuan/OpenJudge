#include<stdio.h>
int get_int_sum(int *p1,int *p2)
{
    int sum;
    scanf("%d%d",p1,p2);
    sum=*p1+*p2;
    return sum;

}
int main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);

    }
    return 0;
}
/**************************************************************
	Problem: 1236
	User: 201801020908
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

