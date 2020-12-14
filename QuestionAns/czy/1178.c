#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int n,max=0,m=0,i=0;
    int a[1011]={0};
   // memset(a,0,sizeof(a));
    while( scanf("%d",&n)!=EOF)
    {
        m++;
        if(n<0 || n>100) continue;
        ++a[n];
        if(a[n]>max) max=a[n];
    }
  /*  int b[10011];
    int kl=0,k=0;
    for(i=0;i<=100;++i)
    {
        if(a[i]==max )
        {
            a[i]
            b[kl]=n;
            kl++;
        }

    }*/
   /* int k=0;
    for(i=0;i<100;i++)
    {
        for(k=i+1;k<99;++k)
        {
            if(a[i]>a[k])
            {
                int temp;
                temp=a[i];
                a[i] = a[k];
                a[k]=temp;
            }
        }
    }*/
    for(i=0;i<=100;++i)
    {
        if(a[i]==max)
        printf("%d\n",i);
    }

}

/**************************************************************
	Problem: 1178
	User: 201601160202
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

