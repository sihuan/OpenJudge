#include<stdio.h>
#define MAX_SIZE 1000

int m=0;

int getarray(int array[])
{
    int t,i=0;
    while(scanf("%d",&t) && t!=0){
        array[i]=t;
        i++;
    }
    m=i;
}

int insert(int array[], int key, int vol)
{
    int i,ti=0;
    if(m==1000)
        return -1;
    for(i=0;i<m;i++){
        if(array[i]==key)
            return -2;
        if(array[i]<key)
            ti=i+1;
    }
    return ti;
}

int result(int flag)
{
    if(flag==-1)
        printf("The array if full!\n");
    else if(flag==-2)
        printf("The key is already in this array!\n");
    else
        printf("The key is inserted in position %d.\n",flag);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

