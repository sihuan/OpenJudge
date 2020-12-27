#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 1001
int main()
{
	char a[max]={0},b[max]={0};
    int i,j,k;
    while(gets(a)!=NULL)
    {
    	j=0;
        for(i=0;i<strlen(a);i++)
        {
            if((a[i]>=97&&a[i]<=122)||(a[i]>=65&&a[i]<=90)||(a[i]>=48&& a[i]<=57))
            {
            	if(a[i]>=65&&a[i]<=90)
            	a[i]=a[i]+32;
                b[j]=a[i];
                j++;
            }

        }
        b[j]='\0';

        for(i=0,j=strlen(b)-1;i<=j;i++,j--)
        {
            if(b[i]!=b[j]&&i!=j)
            {
            	printf("No.\n");
            	break;
			}
			if(i==j||i+1==j)
			 {
			  printf("Yes.\n");
			  break;
			}
        }
	}
} 
/**************************************************************
	Problem: 1061
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

