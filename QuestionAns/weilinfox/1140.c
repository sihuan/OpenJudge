#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 1000
int n;

int insert(int array[], int key, int MAX)
{
    int i;
    if (n==MAX+1)
        return -2;
    for (i=0; i<n; i++) {
        if (array[i]==key)
            return -1;
    }
    if (key<array[0])
        return 0;
    for (i=1; i<n; i++) {
        if (array[i-1]<key && array[i]>key)
            return i;
    }
    return n;
}

void result (int k)
{
    switch (k) {
        case -1:
            printf("The key is already in this array!\n");
            break;
        case -2:
            printf("The array if full!\n");
            break;
        default:
            printf("The key is inserted in position %d.\n", k);
    }
}

void getarray(int array[])
{
    int i;
    int t;
    n=0;
    for (i=0; scanf("%d", &t) && t!=0; i++) {
        n++;
        array[i]=t;
    }
}

int main()
{
    int array[MAX_SIZE], cases, i, key;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        getarray(array);
        scanf("%d", &key);
        result(insert(array, key, MAX_SIZE - 1));
    }
    return 0;
}
/**************************************************************
	Problem: 1140
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

