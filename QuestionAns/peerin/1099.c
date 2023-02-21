 #include <stdio.h> 
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){

  int n;
  scanf("%d",&n);
  if(n<=0)return 1;
  int list[n];
  for(int i=0;i<n;++i){
    scanf("%d",list+i);
  }
  
/*   int len = n; */
/*   for(int i = 0;i<len;++i){ */
/*     for(int j = 0;j<len;++j){ */
/*       if(*(list+j)>*(list+j+1)){ */
/* 	int temp = *(list+j); */
/* 	*(list+j)=*(list+j+1); */
/* 	*(list+j+1)=temp; */
/*       } */
/*     } */
/* } */
  qsort(list,n,4,cmpfunc);
  for(int i = 0;i<n;++i){
    printf("%d",list[i]);
    if(i!=n-1)printf(" ");
  }
  //printf("%d\n",list);
  return 0;
}

/**************************************************************
	Problem: 1099
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

