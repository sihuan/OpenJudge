#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int get_num(int *a,int *b,int *c)
{
 scanf("%d%d%d",a,b,c);
}
void max_min(int *mmax,int *mmin,int a,int b,int c)
{
 if(a>=b&&a>=c)
 {
   *mmax=a;
   if(b>c)
    *mmin=c;
   else
    *mmin=b;
 }
  if(b>=a&&b>=c)
 {
   *mmax=b;
   if(a>c)
    *mmin=c;
   else
    *mmin=a;
 }
  if(c>=a&&c>=b)
 {
   *mmax=c;
   if(b>a)
    *mmin=a;
   else
    *mmin=b;
 }
}

int main()
{
    int cases, i;
    int mmax, mmin, a, b, c;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        get_num(&a, &b, &c);
        max_min(&mmax, &mmin, a, b, c);
        printf("case %d : %d, %d\n", i, mmax, mmin);
    }
}

/**************************************************************
	Problem: 1382
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

