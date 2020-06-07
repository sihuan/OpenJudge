#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 1000
int n;

int insert(int array[], int key, int MAX)
{
    int i, p;
    if (n==MAX+1)
        return -2;
    for (i=0; i<n; i++) {
        if (array[i]==key)
            return -1;
    }

    i=0;
    if (key<array[0])
        p=0;
    else
        for (i=1; i<n; i++) {
            if (array[i-1]<key && array[i]>key) {
                p=i;
                break;
            }
        }
    if (i==n)
        p=n;
    for (i=n; i>p; i--)
        array[i]=array[i-1];
    array[p]=key;

    n++;
    return p;
}

int getkey(int key[])
{
    int k, i;
    scanf("%d", &k);
    for (i=0; i<k; i++) {
        scanf("%d", &key[i]);
    }
    return k;
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
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}

/**************************************************************
	Problem: 1141
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

