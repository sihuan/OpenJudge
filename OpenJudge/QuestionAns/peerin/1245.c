#include <stdio.h>


void hanoi_tower(int number,int begin,int temp,int destination){

  if(number == 0){
    ;
}
  else {
    hanoi_tower(number-1,begin,destination,temp);
    printf("   plate %d : from %d to %d\n",number,begin,destination);
    hanoi_tower(number-1,temp,begin,destination);
  }

}

int main(){

  int number,begin,temp,destination;
  int count=0;
  while(scanf("%d%d%d%d",&number,&begin,&temp,&destination)!=EOF){
    count++;
    printf("case %d :\n",count);
    hanoi_tower(number,begin,temp,destination);
    printf("\n");
  }
  return 0;

}

/**************************************************************
	Problem: 1245
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

