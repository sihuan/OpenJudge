#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 1001//该函数中宏不能随意定义
int getarray(int array[])
{
    int i;
    for(i=0;i<MAX_SIZE;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]==0)
            break;
    }
}
int insert(int array[], int key, int vol)
{
    int i,j;
    for(i=0;array[i]!=0;i++);
    if(i>=vol)
        return 0;
    else
    {
        for(j=0;array[j]<key&&j<i;j++);
        if(array[j]==key)
            return 2;
        else
            return 3+j;
    }
}
int result(int flag)
{
    if(flag==0)
        printf("The array if full!\n");
    else if(flag==2)
        printf("The key is already in this array!\n");
    else
        printf("The key is inserted in position %d.\n",flag-3);
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

