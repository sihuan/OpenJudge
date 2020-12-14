#include <stdio.h>

void sushu(int i)
{
    int k;
    int flag=0;
    if(i==0 || i==1) return;
    for(k=2;k<=i-1;++k)
    {
        if(i%k==0)
        {
                flag=1;
                break;
        }
    }
    if(flag==0)
    {
        printf("%d\n",i);
    }
}

int main()
 {
        int n,m,i;
        scanf("%d%d",&m,&n);
        printf("=====\n");
        for(i=n;i>=m;--i)
       {
            sushu(i);
       }
       printf("=====\n");
       }

/**************************************************************
	Problem: 1027
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

