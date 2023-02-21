#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void c_f(){
  int low,high;
  double step;
  scanf("%d",&low);
  scanf("%d",&high);
  scanf("%lf",&step);
  if(low>high){
    int temp = high;
    high = low;
    low = temp;
  }
    
  printf("%4c  -> %4c\n",'C','F');
  for(double i = low;i<high||(fabs(i - high)<=0.00001);i += step){
    printf("%5.1f -> %5.1f\n",i,i/(5.0/9.0)+32);
  }
}
void f_c(){
  int low,high;
  double step;
  scanf("%d",&low);
  scanf("%d",&high);
  scanf("%lf",&step);
  if(low>high){
    int temp = high;
    high = low;
    low = temp;
  }
  printf("%4c  -> %4c\n",'F','C');
  for(double i = low;i<high||(fabs(i - high)<=0.00001);i += step){
    printf("%5.1f -> %5.1f\n",i,(i-32)*(5.0/9.0));
  }
}
int main(){
  char a,b;
  scanf("%c->%c",&a,&b);
  if(a=='F'&&b=='C'){
    f_c();
  }else if(a=='C'&&b=='F'){
    c_f();
  }
  return 0;
}

/**************************************************************
	Problem: 1028
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

