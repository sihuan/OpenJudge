#include<stdio.h>

int main()
{void Print();
	int n;
	scanf("%d",&n);
	int i;
	for(i=0; i<n; ++i)
	{
		Print();
	}
	return 0;
}
void Print()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i;
	int cnt = 0;
	if(m>n)
	{
		for(i=n; i<m; ++i)
            printf("%d ",i);
        printf("%d\n",i);
	}
	else
    {
        for(i=m; i<n; ++i)
            printf("%d ",i);
        printf("%d\n",i);
	}
	putchar('\n');
}

/**************************************************************
	Problem: 1168
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

