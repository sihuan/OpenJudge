#include<stdio.h>
int change(int a[],int x)
{
    int i=0;
    while(x>0)
    {
        a[i]=x%2;
        x/=2;
        i++;
    }
    return i;
}
void output(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");
}
int main()
{
    int x,n;
    int a[32];
    while(scanf("%d",&x)!=EOF)
    {
        if(x==0)
            printf("0\n");
        else
        {
            n=change(a,x);
            output(a,n);
        }

    }
}

/**************************************************************
	Problem: 1039
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

