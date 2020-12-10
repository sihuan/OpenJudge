#include<stdio.h>
int main()
{
    int k,i,j,m=0,n=1;
    scanf("%d",&k);
    if(k>=13||k<1)
        printf("overflow");
    else
    {
    for(i=1; i<=k; i++)
    {
        for(j=1; j<=i;j++)
        {
            n=n*j;
            /*if(n<=0)
            {
                flag++;
                break;
            }
            */
        }
        m=m+n;
        n=1;
        /*
        if(m<=0)
        {
            flag++;
            break;
        }
        */
    }
    printf("%d",m);
    }
    return 0;
}

/**************************************************************
	Problem: 1029
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

