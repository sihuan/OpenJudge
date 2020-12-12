#include <stdio.h>

int main()
{
    int t,p,q,a,n,i=1;
    scanf("%d",&n);
    scanf(" %d",&q);
    t=q;
    p=q;
    while(i<n)
    {
        scanf(" %d",&a);
        if(p<a)
                p=a;
        if(t>a)
                t=a;
        i++;
    }
    printf("The maximum number is %d.\n",p);
    printf("The minimum number is %d.",t);
    return 0;
}

/**************************************************************
	Problem: 1024
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

