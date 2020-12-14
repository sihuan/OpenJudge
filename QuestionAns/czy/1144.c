#include<stdio.h>
#include <math.h>
#define MAX_SIZE 1009

int get_array(int *array)
{
    int i=0,size=0;
    scanf("%d",&size);
    for(i=0;i<size;++i)
    {
        scanf("%d",&array[i]);
    }
    return size;

}
int max_index(int *index,int *array,int size)
{
    int i=0,k=0,j=0;
    int max=0;
    for(i=0;i<size;++i)
    {
        if(array[max]<array[i]) max=i;
    }
    for(i=0;i<size;++i)
    {
        if(array[max]==array[i])
        {
            index[k]=i;
            ++k;
        }
    }
    return k;
}


void put_array(int *array,int size)
{
    int i=0,flag=0;
    for(i=0;i<size;++i)
    {
        if(flag==0)
        {
            printf("%d",array[i]);
            flag=1;
        }
        else
            printf(",%d",array[i]);
    }
}

int max_value(int *array,int *size)
{
    int i=0,k=0,j=0;
    int max=0;
    for(i=0;i<size;++i)
    {
        if(array[max]<array[i]) max=i;
    }
    return array[max];
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

