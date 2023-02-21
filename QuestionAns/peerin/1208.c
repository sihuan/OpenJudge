#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap_any(void *s,void *t,size_t n){

  char *tmp = (char *)malloc(n);
  memcpy(tmp,t,n);
  memcpy(t,s,n);
  memcpy(s,tmp,n);
  return 0;
}



int main()
{
    int a, b;
    double x, y;
    char c, d;
    char s[1001], t[1001];

    gets(s);
    gets(t);
    swap_any(s, t, sizeof(s));
    printf("%s %s\n", s, t);

    c = getchar();
    getchar();
    d = getchar();
    getchar();
    swap_any(&c, &d, sizeof(char));
    printf("%c %c\n", c, d);

    scanf("%d %d", &a, &b);
    swap_any(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    scanf("%lf %lf", &x, &y);
    swap_any(&x, &y, sizeof(double));
    printf("%lg %lg\n", x, y);
}

/**************************************************************
	Problem: 1208
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

