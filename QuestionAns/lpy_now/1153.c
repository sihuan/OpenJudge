#include<stdio.h>
#define MAX_SIZE 1100

int get_array(int array[]){
    int n;
    scanf("%d",&n);
    return n;
}
void reverse_array(int array[],int n){
    int i;
    for(i=0;i<n;++i){
        scanf("%d",&array[i]);
    }
}
void put_array(int array[],int n){
    if(n!=0){
        int i;
        for(i=n-1;i>0;--i){
            printf("%d ",array[i]);
        }
        printf("%d\n",array[0]);
    }
    else{
        printf("\n");
    }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

