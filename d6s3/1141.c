#include <stdio.h>
#define MAX_SIZE 1001

int m = 0;
int xb = 0;
int crg = -1;

int getkey(int key[])
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &key[i]);
    return n;
}

int getarray(int array[])
{
    int t, i = 0;
    while (scanf("%d", &t) && t != 0) {
        array[i] = t;
        i++;
    }
    m = i;
    return i;
}

int insert(int array[], int key, int vol)
{
    int i, j;
    if (m == 1000)
        return -1;
    else {
        for (i = 0; i < m; ++i) {
            if (key == array[i])
                return -2;
            else if (key < array[i])
                break;
        }
        for (j = m; j > i; --j) {
            array[j] = array[j - 1];
        }
        array[i] = key;
        m++;
        return i;
    }
}

int result(int flag)
{
    if (flag == -1)
        printf("The array if full!\n");
    else if (flag == -2)
        printf("The key is already in this array!\n");
    else
        printf("The key is inserted in position %d.\n", flag);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

