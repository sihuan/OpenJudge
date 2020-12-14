#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10002
typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;
int input_arr(ARR_TYPE *arr)
{
    int i,a;
   scanf("%d",&arr->length);
    for(i=0;i<*(&arr->length);i++)
      scanf("%d",&arr->array[i]);
}
int output_arr(ARR_TYPE arr)
{
    int i;
    printf("%d",arr.array[0]);
    for(i=1;i<arr.length;i++)
     printf(" %d",arr.array[i]);
}
int main()
{
   ARR_TYPE arr;
   input_arr(&arr);
   output_arr(arr);
    return 0;
}
/**************************************************************
	Problem: 1494
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

