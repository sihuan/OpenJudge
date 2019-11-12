#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,c,a,n,i=1,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        j=j+1;
        if(j==1)
        {c=a;
        d=a;}
        if(a>d)
            d=a;
        if(a<c)
            c=a;
    }
    printf("The maximum number is %d.\n",d);
    printf("The minimum number is %d.",c);
    return 0;
}

/**************************************************************
	Problem: 1024
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

