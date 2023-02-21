#include <stdio.h>

int compare(int *min, int *mid, int *max){
  int arr[3]={*min,*mid,*max};
  for(int i = 0;i<3;++i){
    for(int j = i+1;j<3;++j){
      if(arr[j]<arr[i]){
	int temp = arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
      }
    }
  }
  *min = arr[0];
  *mid = arr[1];
  *max = arr[2];
  return 0;
}



int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
/**************************************************************
	Problem: 1241
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

