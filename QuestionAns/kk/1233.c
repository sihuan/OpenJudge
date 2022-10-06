#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int is_primer(int num)
{
    if(num<=1)
        return 0;
    int n,i;
    n=sqrt(num)+1;
    for(i=2;i<n;i++)
        if(num%i==0)
                return 0;
    return 1;
}
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:756 kb
****************************************************************/

