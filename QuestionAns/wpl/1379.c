#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a,b;
    int i;
    scanf("%ld",&a);
    b=a;
    if(a==1)
        printf("no");
    else if(a==2)
        printf("yes");
    else
    {
        for(i=2;i<=b;i++)
        {

        if(b%i==0)
            break;
        }
        if(i>=a)
            printf("yes");
        else
            printf("no");
        return 0;
    }
}

/**************************************************************
	Problem: 1379
	User: 201901060819
	Language: C
	Result: Accepted
	Time:576 ms
	Memory:748 kb
****************************************************************/

