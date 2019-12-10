#include <stdio.h>
#define MAX_SIZE 10002

typedef struct
{
    int length;
    int array[MAX_SIZE];
} ARR_TYPE;

int input_arr(ARR_TYPE* arr)
{
    int n, i;
    scanf("%d", &n);
    (*arr).length = n;
    for (i = 0; i < n; i++) {
        scanf("%d", &(*arr).array[i]);
    }
}

int output_arr(ARR_TYPE arr)
{
    int i;
    for (i = 0; i < arr.length; i++) {
        if (i == 0)
            printf("%d", arr.array[i]);
        else
            printf(" %d", arr.array[i]);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

