#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,p,q,j,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d %d",&p,&q);
      if(p>q)
      {
       t=p;
       p=q;
       q=t;
      }

      for(j=p;j<q;j++)
    {
      printf("%d ",j);
    }
      printf("%d",j);
      printf("\n\n");
    }
    
     return 0;
}

/**************************************************************
	Problem: 1168
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

