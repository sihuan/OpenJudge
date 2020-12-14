#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b&&b<=c)
        printf("%d %d %d", a, b, c);
    else if(b<=a&&a<=c)
        printf("%d %d %d", b, a, c);
    else if(c<=b&&b<=a)
        printf("%d %d %d", c, b, a);
    else if(a<=c&&c<=b)
        printf("%d %d %d", a, c, b);
    else if(b<=c&&c<=a)
        printf("%d %d %d", b, c, a);
    else if(c<=a&&a<=b)
        printf("%d %d %d", c, a, b);
    return 0;
}
/**************************************************************
	Problem: 1018
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

