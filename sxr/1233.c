#include <stdio.h>
#include <stdlib.h>

int is_primer(int num)
{
    int i;
    if(num==1)
        return 0;
    if(num==2)
        return 1;
    for(i=2; i<=(num/i)+1; i++)
    {
        if(num%i==0)
            return 0;
    }
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

