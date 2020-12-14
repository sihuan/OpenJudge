#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  x,a=1,sum=0,fenshu;
  int b,n,m=1,i;
  scanf("%lf%d",&x,&n);
  x=x/180*3.141593;
  if(n==1){
    printf("1.000000");
  }
  if(n>=2){
  for(i=1;i<=n-1;i++){
    m=-m*(2*i-1)*2*i;
    a=a*x*x;
    fenshu=1.0*a/m;
    sum=sum+fenshu;
  }
      printf("%lf",sum+1.000000);
  }
    return 0;
}

    
/**************************************************************
	Problem: 2131
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

