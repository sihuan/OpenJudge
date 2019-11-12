#include <stdio.h>
 
int main()
 
{
 
int i,j,m,n,k;
 
int a[17];
 
while(scanf("%d",&n)!=EOF)
 
{if(n==0)
 
printf("0\n");
 
else
 
{
 
for(m=0;m<=16;m++)
 
{
 
i=n%2;
 
j=n/2;
 
n=j;
 
a[m]=i;
 
}
 
for(m=16;m>=0;m--)
 
{
 
if(a[m]==1)
 
{k=m;
 
break;}
 
}
 
for(m=k;m>=0;m--)
 
printf("%d",a[m]);
 
printf("\n");
 
}
 
}
 
}
/**************************************************************
	Problem: 1039
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

