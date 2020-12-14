#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=0,x,y,max;
    scanf("%d",&y);
    max=y;
    for(i=1;i<15;i++)
    {
        scanf("%d",&x);
        if(x>max)
        {
            n=max;
            max=x;
        }
        else if(x>n&&x!=max)
            n=x;
    }
    printf("%d",n);
    return 0;
}
/**************************************************************
	Problem: 2421
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

