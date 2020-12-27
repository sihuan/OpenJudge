#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 105
int main()
{
	char a[max]={0},b[max]={0};
	unsigned int i,j,len,n,k,p;
	while(gets(a))
	{
		len=strlen(a);
		j=0; 
		for(i=0;i<strlen(a);i++)
		{
				if(isspace(a[i]))
			  {
					len--;
			  }
	  			if(!isspace(a[i]))
			  {
				b[j]=a[i];
				j++;
				n=i; 
				break;
			  }
		}
		if(isspace(a[strlen(a)-1]))
			{
				len--;
			}
		for(k=n+1;k<strlen(a);k++)
		{
			if(!isspace(a[k]))
			{
				b[j]=a[k];
				j++;
			}
			else 
			{
				if(k<strlen(a)-1)
			 {
				for(p=k+1;p<strlen(a);p++)
				{
					if(!isspace(a[p]))
					{
						b[j]=a[k];
						j++;
						break;
					}
					if(p==strlen(a)-1&&isspace(a[strlen(a)-1]))
					{
						len--;
						break;
					}
				}
		 	 }
		    }
		}
		for(j=0;j<len;j++)
		printf("%c",b[j]);
		
		if(b[0]=='E'&&b[1]=='N'&&b[2]=='D'&&len==3)
			break;
		printf("\n");
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	}
}
/**************************************************************
	Problem: 1094
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

