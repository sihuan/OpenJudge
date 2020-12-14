#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 1000
void get_array(int* array, int size)
{
    int i=0;
    while (size--) {
        scanf("%d", &array[i++]);
    }
}

int min_index(int* array, int size)
{
    int max=array[0], i, p=0;
    for (i=0; i<size; i++) {
        if (max>array[i]) {
            p=i;
            max=array[i];
        }
    }
    return p;
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

