#include <stdio.h>
/* unsigned long long shengun(unsigned long long n){ */
/*   return (n-1llu)*1000llu+471llu; */
/* } */
int main(){

  unsigned long long n;
  while(scanf("%llu",&n)!=EOF){
if(n==1)
printf("471\n");
else
    printf("%llu471\n",n-1);


  }

}

/**************************************************************
	Problem: 1047
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

