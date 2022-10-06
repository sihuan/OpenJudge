#include<stdio.h>
int classes[26]={0};
int sumis(int sum,int x)
{
    int rx;
    rx=x%sum;
    if(rx!=0)
        return rx;
    if(rx==0)
        return sum;
}
int classis(int rx,int classes[],int *num)
{
    int i=0;
    while(rx>0)
    {
        rx-=classes[i];
        i++;
    }
    rx+=classes[i-1];
    *num=rx;
    return i;
}
int main()
{
    int n,x,rx,num=0,sum=0;
    int order;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&classes[i]);
        sum+=classes[i];
    }
    while(scanf("%d",&x)!=EOF)
    {
        rx=sumis(sum,x);
        order=classis(rx,classes,&num);
        printf("Class %c : %d\n",order+64,num);
    }

}

/**************************************************************
	Problem: 1248
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

