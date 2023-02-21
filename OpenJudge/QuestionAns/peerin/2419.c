#include <stdio.h>

struct date {
  int y;
  int m;
  int d;
};

struct date get_maxdate() {
  int y,m,d;
  struct date max = {0,0,0};
  while (scanf("%d-%d-%d", &y, &m, &d) != EOF) {
    if(y==max.y)
      if(m==max.m)
	if(d>max.d)
	  max.y=y,max.m=m,max.d=d;
	else ;
      else if(m>max.m)
	max.y=y,max.m=m,max.d=d;
      else ;
    else if(y>max.y)
      max.y=y,max.m=m,max.d=d;
    else ;
  }
  return max;
}


int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

