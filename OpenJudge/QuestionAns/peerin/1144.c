#include <stdio.h>
#define MAX_SIZE 1000

int get_array(int a[]){
  int n;
  scanf("%d",&n);
  for(int i = 0;i<n;++i){
    scanf("%d",a+i);
  }
  return n;
}

int max_value(int a[],int n){
  int max = a[0];
for(int i = 0;i<n;++i){
  if(a[i]>max)max = a[i];
  }
 return max;
}

int max_index(int idx[],int a[],int n){
  int max = max_value(a,n);
  int count=0;
  for(int i =0;i<n;++i){
    if(a[i]==max){
      idx[count++]=i;
    }
  }
  return count;
}

int put_array(int a[],int n){
  for(int i = 0;i<n;++i){
    if(i==0)printf("%d",a[i]);
    else printf(",%d",a[i]);
}
  printf("\n");
  return 0;
}


int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
/**************************************************************
	Problem: 1144
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

