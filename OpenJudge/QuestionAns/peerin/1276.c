#include <stdio.h>

int print_line(int total_num,int blank_num){

  int half_star_num =(total_num - blank_num)/2;
  for(int i = 0;i<half_star_num;++i){
    printf("*");
  }
  for(int i = 0;i<blank_num;++i){
    printf(" ");
  }
  for(int i = 0;i<half_star_num;++i){
    printf("*");
  }
  printf("\n");
  return 0;
}

int print_graphic(int num){
/* Input */

/* 输入为一个奇数n，1<n<50。 */

/* Output */

/* 输出一个n层的空心菱形，格式见sample。 */
/* *********** */     //0
/* ***** ***** */     //1
/* ****   **** */     //3
/* ***     *** */     //5
/* **       ** */     //7
/* *         * */     //9
/* **       ** */     //7
/* ***     *** */     //5
/* ****   **** */     //3
/* ***** ***** */     //1
/* ***********   */   //0
  int half = (num-1)/2;
  for(int i = 0;i<=half;++i){
    if(i==0){
      for(int j = 0;j<num;++j){if(j!=num-1)printf("*");else printf("*\n");}
    }else
     print_line(num,2*i-1);
 }
  for(int i = half-1;i>=0;--i){
    if(i==0){
      for(int j = 0;j<num;++j){if(j!=num-1)printf("*");else printf("*\n");}
    }else
   print_line(num,2*i-1);
  }
  return 0;  
}


int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

