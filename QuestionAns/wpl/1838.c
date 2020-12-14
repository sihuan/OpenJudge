#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N;
    int i,j,k;
    int sum=0;
    int a,b=0;
    scanf("%d",&M);
    for(i=1; i<=M; i++)
    {
        sum=0;
        b=0;
        scanf("%d",&N);
        for(j=1; j<=N; j++)
        {

            scanf("%d",&a);
            for(k=2; k<=a; k++)
            {
                if(a%k==0)
                    break;
            }
            if(a==2||k==a)
            {
                sum+=1;
                b=b+a;
            }
        }
        printf("%d %d\n",sum,b);
    }
    return 0;
}
/**************************************************************
	Problem: 1838
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

