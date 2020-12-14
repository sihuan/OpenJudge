#include<stdio.h>
int put_int_sum(int x, int y)
{
    if (x==0 && y==0);
    else
        printf("%d\n",x+y);
}
int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
/**************************************************************
	Problem: 1240
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

