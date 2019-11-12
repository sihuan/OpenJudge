#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
   double a,b,c;
//   int flag=0;
//   if(a<0)
//   {
//       flag=1;
//       a=-a;
//   }
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
        a=a*0.01;
        a=pow(a,2.0);
      //  printf("%lf",a);
        c=b/a;
       // printf("%lf",c);
        if(c<19) printf("%.2lf lower\n",c);
        else if(c>=19 && c<25) printf("%.2lf health\n",c);
        else if(c>=25&&c<30) printf("%.2lf heavy\n",c);
        else if(c>=30 && c<40) printf("%.2lf super heavy\n",c);
        else if(c>=40) printf("%.2lf extra heavy\n",c);
    }
    return 0;
}

/**************************************************************
	Problem: 1219
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

