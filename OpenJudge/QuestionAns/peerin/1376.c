#include <stdio.h>
#define MAX_SIZE 100

int get_array(int a[]){
  int i = 0;
  while(scanf("%d",a+i++)!=EOF) ;
  return i-1;
}

int put_array(int a[],int n){
  for(int i = 0;i<n;++i){
    if(i==0)printf("%d",a[i]);
    else printf(" %d",a[i]);
  }
  printf("\n");
}

int sort_array(int a[],int n){
  for(int i = 0;i<n;++i)
    for(int j = i+1;j<n;++j){
      if(a[j]<a[i]){
	int temp = a[j];
	a[j]=a[i];
	a[i]=temp;
      } 
    }
  return 0;
}




int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
/**************************************************************
	Problem: 1376
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

