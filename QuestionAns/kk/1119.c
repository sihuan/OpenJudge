#include<stdio.h>
int main()
{
    int N,n,max,min,i;
    while(1)
    {
        max=0;
        min=0;
        scanf("%d",&N);
        if(N==0)
            break;
        else
            for(i=1;i<=N;i++)
            {
                scanf("%d",&n);
                if(i==1)
                    min=n;
                else if(min>n)
                    min=n;
                if(i==1)
                    max=n;
                else if(max<n)
                    max=n;
            }
        printf("%d\n",(max-min)*2);
    }
}
/**************************************************************
	Problem: 1119
	User: 202001060117
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

