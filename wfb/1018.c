#include<stdio.h>

void exchange(int *a,int *b);

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) exchange(&a,&b);
	if(a>c) exchange(&a,&c);
	if(b>c) exchange(&b,&c);
	printf("%d %d %d",a,b,c);

	return 0;
}
void exchange(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/**************************************************************
	Problem: 1018
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

