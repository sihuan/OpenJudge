#include <stdio.h>
#include <string.h>
#include <math.h>
#define int_f 0x7FFFFFFF

int judge(int s)
{
    int i=0;
    if(s==0) return 0;
    if(s==1) return 0;
    if(s==2) return 1;
    for(i=2;i<=sqrt(s);i++)
    {
        if(s%i==0) return 0;
    }
    return 1;

}
int main()
{
    int first=0,end=0,i=0,m=0,k=0;
    int a[500090];
    while(scanf("%d%d",&first,&end)!=EOF)
    {
        m=0;
         for(i=first;i<=end;++i)
         {
             a[i]=i;
         }
        for(i=first;i<=end;++i)
        {
            if(a[i]==-1) continue;
            if(judge(a[i])==1)
            {
                int kl=1;
                while(1)
                {
                    kl++;
                    int kll=kl*i;
                    if(kll>end) break;
                    a[kll]=-1;
                }
            }
            else
            {
                a[i]=-1;
            }
        }
        int jkl=0;
        for(k=first;k<=end;++k)
        {
            if(a[k]!=-1)
            {
                printf("%d\n",a[k]);
                jkl=1;
            }
        }
        if(jkl==0) printf("\n");
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1179
	User: 201601160202
	Language: C
	Result: Accepted
	Time:164 ms
	Memory:2640 kb
****************************************************************/

