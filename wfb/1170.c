#include <stdio.h>
#include <math.h>
int Abs(int n)
{
    if(n<0) return -n;
    else return n;
}
void Print(int n)
{
	int stx=-n/2,edx=n/2;
	int sty=-n/2,edy=n/2;
	int x,y;
	for(y=sty; y<=edy; ++y)
	{
		for(x=stx; x<=edx; ++x)
		{
			if(Abs(x)+Abs(y) == n/2)
				putchar('*');
			else if(x-y>n/2 || x+y>n/2)
                ;
            else
				putchar(' ');
		}
		putchar('\n');
	}
}
int main()
{
//    freopen("output.txt","w",stdout);
	int n;
	while(scanf("%d",&n) != EOF)
	{
		Print(n);
		putchar('\n');
	}
}

/**************************************************************
	Problem: 1170
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

