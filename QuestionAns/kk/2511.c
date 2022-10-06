#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%105==0)
    {
        printf("3 5 7");
        return 0;
    }
    else if(n%15==0)
    {
        printf("3 5");
        return 0;
    }
    else if(n%21==0)
    {
        printf("3 7");
        return 0;
    }
    else if(n%35==0)
    {
        printf("5 7");
        return 0;
    }
    else if(n%3==0)
    printf("3");
    else if(n%5==0)
    printf("5");
    else if(n%7==0)
        printf("7");
    else
        printf("none");
    return 0;

}


/**************************************************************
	Problem: 2511
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

