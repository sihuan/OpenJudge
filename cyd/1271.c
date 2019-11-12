#include <stdio.h>

     int digit_sum(int num)
   {  int n=0,a,b;
       for (num;num!=0;)
       {n+=num%10;
        num=num/10;
       }
       while(n>=10)
       {
           a=n%10;
           b=n/10;
           n=a+b;
       }
       return n;



   }


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

