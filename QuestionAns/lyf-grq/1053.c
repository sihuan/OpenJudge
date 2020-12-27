#include<stdio.h>
#include<string.h>
int main()
{
    int a[105][105];
    memset(a,0,sizeof(a));
    int i,n,b,c,d,x,flag=1;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d %d",&c,&d);
        for(i=0; i<c; i++)
        {
            for(n=0; n<d; n++)
            {
                scanf("%d",&a[i][n]);
            }
        }
        for(i=0;i<d;i++)
        {
            for(n=0;n<c;n++)
            {
                if(flag==0)printf(" %d",a[n][i]);
                if(flag==1){
                    printf("%d",a[n][i]);
                    flag=0;
                }
            }
            flag=1;
            printf("\n");
        }
        if(x)printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1053
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

