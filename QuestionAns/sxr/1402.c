#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    int sum = 0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a);
        if(a%2 == 0)
            sum = sum+a;
        else sum = sum+a+1;
    }
    printf("%d",sum);
    return 0;
}

/**************************************************************
	Problem: 1402
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

