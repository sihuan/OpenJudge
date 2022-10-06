#include<stdio.h>
int main()
{
    int a[101]={0};
    int s,i,t,j;
    while(scanf("%d",&s)!=EOF)
        if(s>=0&&s<=100)
            a[s]++;
    for(i=0;i<=100;i++)
    {
        t=0;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]>=a[j])
                t++;
        }
        for(j=i+1;j<=100;j++)
        {
            if(a[i]>=a[j])
                t++;
        }
        if(t==100)
            printf("%d\n",i);
    }
}
/**************************************************************
	Problem: 1178
	User: 202001060117
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

