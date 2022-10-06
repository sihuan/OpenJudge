#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num[500001];
    memset(num,0,sizeof(num));
    num[0]=1;
    num[1]=1;
    for(int i=2;i*i<500001;i++)
        if(num[i]==0)
            for(int j=i*i;j<500001;j+=i)
                num[j]=1;
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int s=0;
         for(;m<=n;m++)
            if(num[m]==0)
            {
                printf("%d\n",m);
                s=1;
            }
            if(s==0)
                printf("\n");
        printf("\n");
    }
}

/**************************************************************
	Problem: 1179
	User: 202001060117
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:2624 kb
****************************************************************/

