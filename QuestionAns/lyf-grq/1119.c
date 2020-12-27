#include<stdio.h>

int main()
{
    int n;
    int max,min;
    int i;
    while(scanf("%d",&n)&&n!=0)
	{
        int x;
        scanf("%d",&x);
        max=x;
		min=x;
        for(i=1;i<n;i++)
		{
            scanf("%d",&x);
            if(x>max)
			{
            	max=x;
            }
            if(x<min)
			{
                min=x;
            }
        }
        printf("%d\n",2*(max-min));
    }
    return 0;
}

/**************************************************************
	Problem: 1119
	User: 202001061101
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

