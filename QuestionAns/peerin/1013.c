#include <stdio.h>
int find_max(int change,int face){
  int max=-1;
  int temp;
  do{
    max++;
temp = change - max*face;
    
  }while(temp>=face);
  return max;
}

int main(){
  int x;
  scanf("%d",&x);
  int change = 100 - x;
  int d20 = find_max(change,20);
  int d10 = find_max(change-20*d20,10);
  int d5 = find_max(change-20*d20-10*d10,5);
  int d1 = find_max(change-20*d20-10*d10-5*d5,1);
  printf("$20 bills: %d\n",d20);
  printf("$10 bills: %d\n",d10);
  printf(" $5 bills: %d\n",d5);
  printf(" $1 bills: %d",d1);
  return 0;
}

/**************************************************************
	Problem: 1013
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

