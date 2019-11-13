#include<stdio.h>
int main()
{    int a,b,c,i;
     scanf("start = %d, step = %d, times = %d",&a,&b,&c);
     printf("%d",a);
     for(i=1;i<c;i++)
     {
	    a=a+b;
		printf(" %d",a);
	    
     }
     
     return 0;
     
}
/**************************************************************
	Problem: 1090
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

