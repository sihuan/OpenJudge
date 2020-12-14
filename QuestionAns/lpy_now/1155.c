#include<stdio.h>
#define MAX_SIZE 1100

void get_array(int array[],int n){
    int i;
    for(i=0;i<n;++i){
        scanf("%d",&array[i]);
    }
}
int min_index(int array[],int n){
    int index=0,min=array[0],i;
    for(i=1;i<n;++i){
        if(array[i]<min){
            min=array[i],index=i;
        }
    }
    return index;
}


int main()
{
    int array[MAX_SIZE], size, index;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);

    return 0;
}

/**************************************************************
	Problem: 1155
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

