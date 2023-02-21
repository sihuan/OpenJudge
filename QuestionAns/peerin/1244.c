#include <stdio.h>

int main(){
  int sec;
  while(scanf("%d",&sec)!=EOF&&sec!=0){
        sec--;
    double hour = sec/60.0/60.0;
    double min = (sec - (int)hour*3600)/60.0;
    int sec_left = sec - (int)hour*3600-(int)min*60;
    printf("%02d:%02d:%02d\n",(int)hour,(int)min,sec_left);

  }
  return 0;
}

/**************************************************************
	Problem: 1244
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

