#include <stdio.h>
int main()
{
    int a,b,n,sum,flag=1;
    scanf("%d",&n);
      while(n--)
      {   sum=0;
          scanf("%d %d",&a,&b);
          for(a;a<=b;a++)
            sum+=a;
            printf("case %d:sum=%d.\n",flag,sum);
            flag++;

      }







    return 0;

}

/**************************************************************
	Problem: 1145
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

