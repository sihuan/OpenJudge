#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,i,j,k,m=0,sum=0,low=1,highest,higher,temp;

    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        ++m;
        for(i=100;i<1000;++i)
        {
            low=i%10;
            higher=(i/10)%10;
            highest=i/100;
            if(low==higher || low== highest || higher==highest) continue;
            if((i%n)==0) sum=sum+i;
        }
        printf("case %d:%d\n",m,sum);
    }

    return 0;
}



/**************************************************************
	Problem: 1207
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

