#include<stdio.h>
#include<stdlib.h>
int judge(int i)
{
    int a,b,c;
    a=i%10;
    i/=10;
    b=i%10;
    c=i/10;
    if(a==b||b==c||c==a)
        return 0;
    else
        return 1;
}
int main()
{
    int M,sum,i,j=0;
    while(scanf("%d",&M)!=EOF)
    {
        j++;
        sum=0;
        for(i=100;i%M!=0;i++);
        while(i<1000)
        {
            if(judge(i))
                sum+=i;
            i+=M;
        }
        printf("case %d:%d\n",j,sum);
    }
}


/**************************************************************
	Problem: 1207
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

