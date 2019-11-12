#include <stdio.h>
#include <string.h>
#define MAX_SIZE (1000)

int f=0;

int getarray(int *array)
{
    int i=0,a;
    while(1)
    {
        scanf("%d",&a);
        if(a==0) return 0;
        array[i++]=a;
        f=i;
    }
}

int insert(int *a,int key,int num)
{
    if(f==MAX_SIZE) return -2;
    int i=0;
    if(key>a[f-1]) return f;
    for(i=0;i<f;++i)
    {
        if(key==a[i]) return -1;
        if(a[i]>key) return i;
    }
    return 0;
}

int result(int flag)
{
    if(flag==-2) puts("The array if full!");
    else if(flag==-1) puts("The key is already in this array!");
    else printf("The key is inserted in position %d.\n",flag);

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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

