#include<stdio.h>

typedef struct{
    int len;
    int num[11000];
}ARR_TYPE;

void input_arr(ARR_TYPE *arr){
    scanf("%d",&arr->len);
    int i;
    for(i=0;i<arr->len;++i){
        scanf("%d",&arr->num[i]);
    }
}
void output_arr(ARR_TYPE arr){
    int i;
    for(i=0;i<arr.len;++i){
        printf("%d ",arr.num[i]);
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:760 kb
****************************************************************/

