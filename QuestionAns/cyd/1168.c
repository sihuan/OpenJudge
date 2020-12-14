#include <stdio.h>
int main()
{
    long long int n,p,q,i,flag;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&p,&q);
        if(p<=q)
        {
            printf("%lld",p);
            for (p=p+1; p<=q; p++)
                printf(" %lld",p);
        }
        else
        {
            i=q;
            q=p;
            p=i;
            printf("%lld",p);
            for (p=p+1; p<=q; p++)
                printf(" %lld",p);
        }
        if(n!=0)
            printf("\n\n");

    }
    return 0;

}

/**************************************************************
	Problem: 1168
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

