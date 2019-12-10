#include <stdio.h>

int js, s;

int qh(void)
{
    int a;
    scanf("%d", &a);
    s += a;
    js--;
    if (js == 0)
        return s;
    else
        return qh();
}

int main()
{
    scanf("%d", &js);
    printf("%d", qh());
}
/**************************************************************
	Problem: 1764
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

