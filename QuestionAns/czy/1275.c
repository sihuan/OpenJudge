#include <stdio.h>
#include <math.h>
#define MAX_STR_LEN 1009


int main()
{
    int x;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%3==1&&i%4==2&&i%5==3)
        {
            printf("%d\n",i);
        }
    }
}

/**************************************************************
	Problem: 1275
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

