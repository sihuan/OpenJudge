#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max,min;
    scanf("%d",&n);
    max=n;
    min=n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>max)
            max=n;
        if(n<min)
            min=n;
    }
    printf("The maximum stretch is %d.",max-min);

}


/**************************************************************
	Problem: 2512
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

