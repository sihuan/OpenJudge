#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 10009

typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;

int input_arr(ARR_TYPE *arr)
{
    scanf("%d",&arr->length);
    int i;
    int flag=0;
    for(i=0;i<arr->length;++i)
    {
        scanf("%d",&arr->array[i]);
    }
}
int output_arr(ARR_TYPE arr)
{
    int i;
    int flag=0;
    for(i=0;i<arr.length;++i)
    {
        if(flag==0) printf("%d",arr.array[i]);
        else printf(" %d",arr.array[i]);
        flag=1;
    }
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

