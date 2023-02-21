#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int i;
  int array[n];
for(i = 0;i<n;++i){
  scanf("%d",array+i);
 }
 int index;
 while(scanf("%d",&index)!=EOF){
   if((index-1)>n-1||index < 1)printf("OUT OF RANGE\n");
   else{
     printf("%d\n",array[index-1]);

   }

 }


}

/**************************************************************
	Problem: 1458
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

