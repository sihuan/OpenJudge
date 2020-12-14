#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, m, i=0, sum = 0;
    int s[10];
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        sum = a+b;
        s[i]= sum;
        i++;
    }
    for(m=0;m<i-1;m++)
    printf("%d\n\n",s[m]);
    printf("%d",s[i-1]);
    return 0;
}
/**************************************************************
	Problem: 1023
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

