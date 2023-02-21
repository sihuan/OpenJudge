#include <stdio.h>

int main(){
  /* int sec; */
  /* while(scanf("%d",&sec)!=EOF&&sec!=0){ */
  /*   double hour = sec/60.0/60.0; */
  /*   double min = (sec - (int)hour*3600)/60.0; */
  /*   int sec_left = sec - (int)hour*3600-(int)min*60; */
  /*   printf("%d:%d:%d",(int)hour,(int)min,sec_left); */

  /* } */
  int hour,min,sec;
  while (scanf("%d:%d:%d",&hour,&min,&sec)!=EOF){
  printf("%d\n",hour*3600+min*60+sec+1);
  }
  return 0;
}

/**************************************************************
	Problem: 1455
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

