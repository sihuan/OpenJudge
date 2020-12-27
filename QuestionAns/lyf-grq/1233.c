#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int is_primer(int num)
{
    int i,k,count=0;
    if(num==1)
    return 0;
    else if(num==2)
    return 1;
    else if(num%2==0)
    return 0;
    else if(num%2==1)
    {
    	k=sqrt(num)+1;
    	for(i=2;i<=k;i++)
    	{
    		if(num%i==0)
    		count++;
		}
		if(count!=0)
		return 0;
		else
		return 1;	
	}
}


int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:756 kb
****************************************************************/

