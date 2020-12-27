#include <stdio.h>
#include <stdlib.h>
struct date
{
	int y;
	int m;
	int d;
};
 struct date get_maxdate()
{
	struct date max;
	struct date x; 
	scanf("%d-%d-%d",&x.y,&x.m,&x.d);
	max.y=x.y;
	max.m=x.m;
	max.d=x.d;
	while(scanf("%d-%d-%d",&x.y,&x.m,&x.d)!=EOF)
	{
		if(x.y>max.y)
		{
			max.y=x.y;
			max.m=x.m;
			max.d=x.d;
			continue;
		}
		else if(x.y==max.y&&x.m>max.m)
		{
			max.y=x.y;
			max.m=x.m;
			max.d=x.d;
			continue;
		}
		else if(x.y==max.y&&x.m==max.m&&x.d>max.d)
		{
			max.y=x.y;
			max.m=x.m;
			max.d=x.d;
			continue;
		}
	}
	return max;	
}

int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

