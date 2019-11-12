#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,y;
    int x[10001];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&x[i]);
    }
    while(scanf("%d",&y)!=EOF)
        {
            for(i=0;i<N;i++)
            {
                if(x[i]==y)
                    {printf("%d\n",i+1);break;}
            }
                if(i==N)
                    printf("NOT FOUND\n");
        }
    return 0;
}

/**************************************************************
	Problem: 1459
	User: 201901060819
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

