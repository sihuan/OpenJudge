#include<stdio.h>
int main()
{     
      int a,b,c,t;

      scanf("%d",&a);
      b=a/100 ;
      c=a/10%10;
      t=a%10;
      
      if(a==b*b*b+c*c*c+t*t*t)
      printf("YES\n");
      else 
	  printf("NO");
	  return 0; 
      

}
/**************************************************************
	Problem: 1012
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

