#include<stdio.h>
int main()
{
    unsigned sum=0,k=1,n,i,m1,m2;
    scanf("%u",&n);
    for(i=1;i<=n;i++)
    {
        m1=k;
        k*=i;
        if(k/m1!=i)
        {
            printf("overflow");
            return 0;
        }

        m2=sum;
        sum+=k;
        if(sum-m2!=k)
        {

            printf("overflow");
            return 0;
        }

    }
    printf("%u",sum);
}

/**************************************************************
	Problem: 1029
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

