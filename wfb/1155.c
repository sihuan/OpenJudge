#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 1000

int get_array(int a[], int n)
{
	int i;
	for(i=0; i<n; ++i)
	{
		scanf("%d",a+i);
	}

	return n;
}
int min_index(int a[], int n)
{
	int min = INT_MAX;
	int pos=0;
	int i;
	for(i=0; i<n; ++i)
	{
		if(a[i] <= min)
		{
			min = a[i];
			pos = i;
		}
	}
	return pos;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

