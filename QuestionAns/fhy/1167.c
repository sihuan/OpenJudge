#include <stdio.h>

int main()

{   int N,i;
    scanf("%d",&N);
    if(N>0)
   {
       for(i=1;i<=N;i++)
     { if(i==1)
       {
           printf("1");
       }
       else
       printf(" %d",i);
     }
   }
    if(N==0)

	{
	    i=0;
	    printf("%d",i);
	}
        if(N<0)
    {
        for(i=N;i<=-1;i++)

      {   if(i==N)
      {
          printf("%d",N);
      }
      else
          printf(" %d",i);
      }
    }
	return 0;
}

/**************************************************************
	Problem: 1167
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

