#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int a,b,c,d;
    while(scanf("%d",&n)!=EOF)
    {
    loop:
		n++;
    	a=n/1000;
    	b=n/100%10;
    	c=n/10%10;
    	d=n%10;
    	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
			printf("%d\n",n);
		else
		goto loop;
	}
    
}
 



/**************************************************************
	Problem: 1297
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

