#include <stdio.h>
#define MAX_SIZE 1000

int get_array(int a[]){

  int size;
  scanf("%d",&size);
  for(int i = 0;i<size;++i){
    scanf("%d",a+i);
  }
  return size;
  
}

int reverse_array(int a[],int n){
  int len;
if(n%2==0){
  len = n/2;
  }
 else{
   len = (n+1)/2;
}
  for(int i = 0;i<len;++i){
    int temp = a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
  }
  return 0;
}

int put_array(int a[],int n){
  for(int i = 0;i<n;++i){
    if(i==0)printf("%d",a[i]);
    else printf(" %d",a[i]);
  }
  printf("\n");
  return 0;
}



int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
/**************************************************************
	Problem: 1153
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

