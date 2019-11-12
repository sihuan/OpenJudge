#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int put_int_sum(int a, int b)
{
    int c;
    c=a+b;
    if(c!=0)
        printf("%d\n",c);
    return c;
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
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

