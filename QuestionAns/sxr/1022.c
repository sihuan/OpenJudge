#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, m, i=0, sum = 0;
    int s[10];
    while(a != 0 || b != 0)
    {
        scanf("%d %d", &a, &b);
        sum = a+b;
        s[i]= sum;
        i++;
    }
    for(m=0;m<i-1;m++)
    printf("%d\n",s[m]);
    return 0;
}

/**************************************************************
	Problem: 1022
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

