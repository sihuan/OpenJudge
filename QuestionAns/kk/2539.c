#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int num[50000]={0};
    num[1]=1;
    num[0]=1;
    for(int i=2;i*i<=50000;i++)
        if(num[i]==0)
        for(int j=i*i;j<=50000;j+=i)
            num[j]=1;
    int pr[20000];
    int j=0;
    for(int i=0;i<50000;i++)
    {
        if(num[i]==0)
            pr[j]=i;
        j++;
    }
    int in;
    scanf("%d",&in);
    for(int i=0;i<j;i++)
        if(pr[i]>=in)
        {
            printf("%d",pr[i]);
            return 0;
        }
}

/**************************************************************
	Problem: 2539
	User: 202001060117
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:948 kb
****************************************************************/

