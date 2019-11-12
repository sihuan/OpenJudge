#include<stdio.h>
#include <math.h>
#define MAX_SIZE 1009

int get_array(int *array)
{
    int size=0;
    while(scanf("%d",&array[size])!=EOF)
    {
        size++;
    }
    return size;

}
void  sort_array(int *array,int size)
{
    int i,k;
    for(i=0;i<size-1;++i)
    {
        for(k=i+1;k<size;++k)
        {
            if(array[i]>array[k])
            {
                int temp;
                temp=array[i];
                array[i]=array[k];
                array[k]=temp;
            }
        }
    }
}


void put_array(int *array,int size)
{
    int flag=0,i=0;
    for(i=0;i<size;++i)
    {
        if(flag==0)
        {
            printf("%d",array[i]);
            flag=1;
        }
        else
        {
            printf(" %d",array[i]);
        }

    }
    printf("\n");
}


int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
/**************************************************************
	Problem: 1376
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

