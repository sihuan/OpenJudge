#include <stdio.h>
#include <stdlib.h>
int main()
{
  int k,m,n,min,i;
scanf("%d %d %d",&k,&m,&n);
min=m<=n?m:n;
printf("%d",min);//单独处理开头
for(i=min+1;i<=k;i++)
{
if((i%m==0||i%n==0)&&(i%m==0&&i%n==0)==0)//条件
printf(" %d",i);//中间有空格的输出
}


return 0;
}
/**************************************************************
	Problem: 1019
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

