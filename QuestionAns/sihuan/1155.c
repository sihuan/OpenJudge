#include<stdio.h>
#include <math.h>
#define MAX_SIZE 1009
 
int get_array(int *array,int size)
{
 
    int i=0,k=0;
    for(i=0;i<size;++i)
    {
        scanf("%d",&array[i]);
    }
 
}
 
int min_index(int *array,int size)
{
    int min=0,i=0;
    for(i=0;i<size;++i)
    {
        if(array[min]>array[i])
        {
            min=i;
        }
    }
    return min;
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
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

