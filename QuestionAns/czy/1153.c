#include<stdio.h>
#include <math.h>
#define MAX_SIZE 1009

int get_array(int *array)
{
    int size;
    scanf("%d",&size);
    int i=0,k=0;
    for(i=0;i<size;++i)
    {
        scanf("%d",&array[i]);
    }

}

int reverse_array(int *array,int size)
{
    int i=0;
    for(i=0;i<size/2;++i)
    {
        int temp;
        temp=array[i];
        array[i]=array[size-i-1];
        array[size-i-1]=temp;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

