#include<stdio.h>
int main()
{
    int n;
    int a,b,c;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b>c)&&(a+c>b)&&(b+c>a))
            printf("YES\n");
        else
            printf("NO\n");
    }
}

/**************************************************************
	Problem: 1079
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

