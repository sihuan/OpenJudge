#include <stdio.h>
int main()
{
   int n,a,b,flag=1,sum;
   scanf("%d",&n);
   while(n--)
   {  scanf("%d",&a);
       sum=0;
       while(a--)
     {  scanf("%d",&b);

        if(b%2==0)
          sum+=b;
        else
            {b=b+1;
           sum+=b;}
     }
     printf("Case %d: %d\n",flag,sum);
     flag++;



   }
    return 0;

}

/**************************************************************
	Problem: 1420
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

