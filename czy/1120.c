#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int zh=0,fu=0;
    double n=0,m=0,sumzh=0,sumfu=0;
    while(1)
    {
        scanf("%lf",&n);
        if(n==0) break;
        else if(n>0)
        {
            zh++;
            sumzh=sumzh+n;
        }
        else if(n<0)
        {
            fu++;
            sumfu=sumfu+n;
        }

    }
    if(fu>0) printf("%d %.2lf\n",fu,sumfu/fu);
    else printf("0\n");
    if(zh>0) printf("%d %.2lf\n",zh,sumzh/zh);
    else printf("0\n");
    return 0;
}

/**************************************************************
	Problem: 1120
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

