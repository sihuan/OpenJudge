#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,j,i,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      flag=0;
    scanf("%d%d",&a,&b);
   for(c=0;c<=a;c++)
   {
      if(2*c+4*(a-c)==b)
      {
          flag=1;
        printf("%d %d\n",c,a-c);}
    }
        if(flag==0||b%2!=0)
        printf("no result\n");
   }
    return 0;
}

/**************************************************************
	Problem: 1763
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

