#include<stdio.h>
#include<stdlib.h>


int main()
{
	char ch1,ch2;
	scanf("%c->%c",&ch1,&ch2);
	double low,high,add;
	scanf("%lf%lf%lf",&low,&high,&add);
	printf("   %c  ->    %c\n",ch1,ch2);
	double i;
	for(i=low; i-high<=1e-6; i+=add)
	{
		double r;
		if(ch1 == 'C')
			r = 9*i/5+32;
		else
			r = (i-32)*5/9;
		printf("%5.1f -> %5.1f\n",i,r);
	}
	return 0;
}

/**************************************************************
	Problem: 1028
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

