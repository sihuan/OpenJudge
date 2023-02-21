#include <stdio.h>

int main(){
  double meiyuan,ouyuan,riyuan;
  int waibi,rmb;
  scanf("%lf %lf %lf\n%d\n%d",&meiyuan,&ouyuan,&riyuan,&waibi,&rmb);
  printf("%.2f %.2f %.2f\n%.2f %.2f %.2f",meiyuan/100*waibi,ouyuan/100*waibi,riyuan/100*waibi,rmb/(meiyuan/100),rmb/(ouyuan/100),rmb/(riyuan/100));
return 0;
}

/**************************************************************
	Problem: 1005
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

