
#include <stdio.h>
int main()
{ 
    int i,j,k,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  
	  for(j=1;j<=n-i;j++)
        {
		printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{  
	    	if(i<10)
	    	{
			printf("%d",i);
	    	}
	    	if(i>9)
		 {  a=i/10;
		    b=i-a*10;
		 	printf("%d",b);
		 	
	     } 
		}
		printf("\n");
	}
	return 0;
} 
/**************************************************************
	Problem: 1165
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

