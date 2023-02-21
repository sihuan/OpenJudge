#include <stdio.h>

int main(int argc, char *argv[])
{
  double p,w,m;
  scanf("%lf%lf%lf",&p,&w,&m);
  printf("%.2lf",m<=500?p*w*m:m>=501&&m<=1000?500*p*w+(m-500)*p*0.95*w:m>=1001&&m<=2000?500*p*w+500*p*0.95*w+(m-1000)*p*0.9*w:m>2000?500*p*w+500*p*0.95*w+1000*p*0.9*w+(m-2000)*p*0.88*w:0.0);
  return 0;
}


/**************************************************************
	Problem: 2412
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

