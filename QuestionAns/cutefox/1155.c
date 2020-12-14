#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int get_array(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    return n;
}
int min_index(int a[], int n)
{
    int min=a[0],i;
    for(i=0;i<n;i++)
     if(a[i]<min)
        min=a[i];
    for(i=0;i<n;i++)
     if(min==a[i])
       return i;
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

