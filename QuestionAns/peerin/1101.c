#include <stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  for(int i = 0;i<n;++i){
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    int is_leap = year%4==0&&year%100!=0||year%400==0?1:0;
    if(month>12||month<1||day<1||day>31){printf("error date!\n");continue;}
    if((!is_leap)&&month==2&&(day>28)||is_leap&&month==2&&(day>29)||(!(month==1||month==3||month==5||month==7||month==8||month==10||month==12))&&(day>30)){printf("error date!\n");continue;}
    
      int sum_day = 0;
      for(int i = 1;i<month;++i){
	sum_day+=i==1||i==3||i==5||i==7||i==8||i==10||i==12?31:i==2?is_leap?29:28:30;
    }
      sum_day+=day;
      printf("%d\n",sum_day);
  }
  return 0;
}

/**************************************************************
	Problem: 1101
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

