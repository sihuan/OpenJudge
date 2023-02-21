#include<stdio.h>
int recursive(){
  char c = getchar();
  if(c!=EOF){
  recursive();
  putchar(c);
  }else{
    return 0;
  }
  
}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2212 kb
****************************************************************/

