#include <stdio.h>
#include <math.h>
/* int is_primer(int num){ */
/*   if(num == 1) */
/*     return 0; */
/*   else if(num == 2 || num == 3 || num ==5 || num == 7) */
/*     return 1; */
/*   else if (num % 2 == 0) */
/*     return 0; */
/*   else if(num % 3 == 0) */
/*     return 0; */
/*   else if(num % 5 == 0) */
/*     return 0; */
/*   else if(num % 7 == 0) */
/*     return 0; */
/*   else */
/*     return 1; */


/* } */

int is_primer(int num){
  if(num == 1)
    return 0;
  int n = sqrt(num);
  for(int i = 2;i<=n;++i){
    if(num%i==0)
      return 0;

  }
  return 1;
}


int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

