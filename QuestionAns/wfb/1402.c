#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum = 0;
    int i;
    for(i=0; i<3; ++i)
    {
        scanf("%d",&a);
        if(a%2 == 0) sum += a;
        else sum += a+1;
    }
    printf("%d\n",sum);
    return 0;
}

/**************************************************************
	Problem: 1402
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

