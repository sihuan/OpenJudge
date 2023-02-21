#include <stdio.h>
void func(int score){
  
  if(score < 0||score>100)
    printf("Error\n");
  else{
    score = score / 10;
  switch(score){
  case 0:
    printf("Failing\n");
    break;
  case 1:
    printf("Failing\n");
    break;
  case 2:
    printf("Failing\n");
    break;
  case 3:
    printf("Failing\n");
    break;
  case 4:
    printf("Failing\n");
    break;
  case 5:
    printf("Failing\n");
    break;
  case 6:
    printf("Pass\n");
    break;
  case 7:
    printf("Average\n");
    break;
  case 8:
    printf("Good\n");
    break;
      case 9:
    printf("Excellent\n");
    break;
  case 10:
    printf("Excellent\n");
    break;
  default:
    printf("Error\n");
  }

  }

}
int main(){
  int score;
  while( scanf("%d",&score)!=EOF){
    func(score);
  }
  


  return 0;
}

/**************************************************************
	Problem: 1025
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

