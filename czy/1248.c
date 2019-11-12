#include <stdio.h>
#define MAX_SIZE 200


int main()
{
    int n;
    scanf("%d",&n);
    int aa[10009];
    int i,k,j,l;
    for(i=1;i<=n;++i)
    {
        scanf("%d",&aa[i]);
    }
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        int x=1;
        while(1)
        {
            if(m<=aa[x%(n+1)])
                {
                    printf("Class %c : %d\n",x%(n+1)-1+'A',m);
                    break;
                    }
            else
            {
                m=m-aa[x%(1+n)];
                ++x;

            }
        }
    }

}

/**************************************************************
	Problem: 1248
	User: 201601160202
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

