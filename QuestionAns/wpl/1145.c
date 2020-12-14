 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    int x=0;
    int min,max,sum=0;

    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {

        while(scanf("%d %d",&min,&max)!=EOF)
        {
                   sum=0;
            for(j=min;j<=max;j++)
                sum+=j;
                x=x+1;
        printf("case %d:sum=%d.\n",x,sum);
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1145
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

