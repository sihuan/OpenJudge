#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int judge(int n,int k)
{
    int w;
    w=n;
    while(w!=0)
    {
        if(abs(w%10)==k)
            return n;
        else w/=10;
    }
}

int main()
{
    int M,a,b,k,i=1,s,sum;
    scanf("%d",&M);
    while(i<=M)
    {
        sum=0;
        scanf("%d%d%d",&a,&b,&k);
        while(a<=b)
        {
            s=judge(a,k);
            sum+=s;
            a++;
        }
        printf("%d\n",sum);
        i++;
    }
}

/**************************************************************
	Problem: 1118
	User: 202001060117
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

