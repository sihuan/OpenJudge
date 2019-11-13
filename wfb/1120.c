#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int z=0;
    int zSum=0;
    int f=0;
    int fSum=0;
    while(scanf("%d",&n) && n)
    {
        if(n<0)
        {
            ++f;
            fSum += n;
        }
        else if(n>0)
        {
            ++z;
            zSum += n;
        }
    }
    if(f)
    {
        printf("%d %.2f",f,1.0*fSum/f);
    }
    else
        printf("0");
    putchar('\n');
    if(z)
        printf("%d %.2f",z,1.0*zSum/z);
    else
        printf("0");
    putchar('\n');

    return 0;
}

/**************************************************************
	Problem: 1120
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

