#include <stdio.h>
void Hannic(int n,char a,char b,char c)
{
    if(n>0)
	{
        Hannic(n-1,a,c,b);
        printf("   plate %d : from %c to %c\n",n,a,c);
        Hannic(n-1,b,a,c);
	}
}
int main()
{
	int n;
	char a,b,c;
	int cnt = 0;
	while(scanf("%d %c %c %c",&n,&a,&b,&c) != EOF)
	{
		++cnt;
		printf("case %d :\n",cnt);
		Hannic(n,a,b,c);
		putchar('\n');
	}
	return 0;
}

/**************************************************************
	Problem: 1245
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

