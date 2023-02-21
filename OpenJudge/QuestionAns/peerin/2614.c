#include <stdio.h>

struct student
{
  int serial;
  double score;
  char level;
  char name[14];
};

int main(int argc, char *argv[])
{
  printf("%lu",sizeof(struct student));
  return 0;
}


/**************************************************************
	Problem: 2614
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:740 kb
****************************************************************/

