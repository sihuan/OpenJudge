#include <stdio.h>
#include <string.h>



int main()
{
    int H=0,M=0,S=0;
    int n=0,i;
    while(scanf("%d",&n))
    {
        if(n==0) break;
        H=0;M=0;S=0;
        for(i=1;i<n;++i)
        {
            S++;
            if(S==60)
            {
                M++;
                S=0;
            }
            if(M==60)
            {
                H++;
                M=0;
            }
        }
        printf("%02d:%02d:%02d\n",H,M,S);
    }
    return 0;
}

/**************************************************************
	Problem: 1244
	User: 201601160202
	Language: C
	Result: Accepted
	Time:80 ms
	Memory:748 kb
****************************************************************/

