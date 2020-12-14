#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 10005

typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;

int input_arr(ARR_TYPE *arr)
{
    scanf("%d",&arr->length);
    int i;
    for(i=0; i<arr->length; ++i)
        scanf("%d",&arr->array[i]);
    return 0;
}
int output_arr(ARR_TYPE arr)
{
    int i;
    for(i=0; i<arr.length; ++i)
    {
        if(i) putchar(' ');
        printf("%d",arr.array[i]);
    }
    return 0;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

