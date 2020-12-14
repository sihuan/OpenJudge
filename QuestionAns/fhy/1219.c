#include <stdio.h>
int main()
{  double a,b,c,d;
   while(scanf("%lf%lf",&a,&b)!=EOF)
   {

   d=a/100;
   c=b/(d*d);
   if(c<19)
   printf("%.2lf lower\n",c);
   if(c>=19&&c<25)
   printf("%.2lf health\n",c);
   if(c>=25&&c<30)
   printf("%.2lf heavy\n",c);
   if(c>=30&&c<40)
   printf("%.2lf super heavy\n",c);
   if(c>=40)
   printf("%.2lf extra heavy\n",c);
   
   }
   return 0;
}
/**************************************************************
	Problem: 1219
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

