#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 10005

int main()
{
    int n;
    int class[55];
    scanf("%d",&n);
    int i;
    int sum=0;
    for(i=1; i<=n; ++i)
    {
        scanf("%d",class+i);
        sum += class[i];
    }
    int x;
    char c;
    while(scanf("%d",&x) != EOF)
    {
        x = (x-1)%sum;
        ++x;
        c = 'A';
        for(i=1; i<=n; ++i)
        {
            if(x > class[i])
            {
                x -= class[i];
                ++c;
            }
            else break;
        }
        printf("Class %c : %d\n",c,x);
    }
    return 0;
}

/**************************************************************
	Problem: 1248
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

