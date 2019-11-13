#include<stdio.h>

int isArmstrong(int n);

int main()
{
	int n;
	scanf("%d",&n);
	if(isArmstrong(n)) printf("YES\n");
	else printf("NO\n");

	return 0;
}
int isArmstrong(int n)
{
	int is = 0;
	int h,t,o;
	h = n/100;
	t = n/10%10;
	o = n%10;
	if(h*h*h + t*t*t + o*o*o == n)
		is = 1;

	return is;
}

/**************************************************************
	Problem: 1012
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

