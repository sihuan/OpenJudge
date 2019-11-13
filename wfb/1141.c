#include <stdio.h>
#define MAX_SIZE 1005
int getkey(int key[])
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
        scanf("%d",&key[i]);
    return n;
}
int getarray(int array[])
{
    int n;
    int i=0;
    while(scanf("%d",&n) && n!=0)
    {
        array[i++] = n;
    }
    array[1004] = i;
    return i;
}
int insert(int array[], int key, int vol)
{
    if(array[1004] == 1000) return -2;
    else
    {
        int i,j;
        for(i=0; i<array[1004]; ++i)
        {
            if(key==array[i]) return -1;
            else if(key<array[i]) break;
        }
        for(j=array[1004]; j>i; --j)
        {
            array[j] = array[j-1];
        }
        array[i] = key;
        ++array[1004];
        return i;
    }
}
int result(int flag)
{
    if(flag == -2)
        printf("The array if full!\n");
    else if(flag== -1)
        printf("The key is already in this array!\n");
    else
        printf("The key is inserted in position %d.\n",flag);
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

