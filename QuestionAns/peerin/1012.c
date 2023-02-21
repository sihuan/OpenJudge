#include <stdio.h>
int is_(int num){
  int is_or_not;
  int hundred,ten,several;
  hundred = num/100;
  ten = (num-hundred*100)/10;
  several = num - hundred*100 - ten*10;
  if(hundred*hundred*hundred+ten*ten*ten+several*several*several==num)
    is_or_not = 1;
  else
    is_or_not = 0;


  return is_or_not;
}
int main(){
  int num;
  scanf("%d",&num);
  printf("%s",is_(num)?"YES":"NO");


  
  return 0;
}

/**************************************************************
	Problem: 1012
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

