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

int getkey(int *key)
{
    int n=0,i;
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&key[i]);
    return n;
}

int insert(int *a,int key,int num)
{
    if(f==MAX_SIZE) return -2;
    int i=0;
    if(key>a[f-1]) i=f;
    else{
        for(i=0; i<f; ++i)
        {
            if(key==a[i]) return -1;
            if(a[i]>key) break;
        }
    }
    int k=0;
    for(k=f;k>i;--k)
    {
        a[k]=a[k-1];
    }
    a[i]=key;
    ++f;
    return i;
}

int result(int flag)
{
    if(flag==-2) puts("The array if full!");
    else if(flag==-1) puts("The key is already in this array!");
    else printf("The key is inserted in position %d.\n",flag);

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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

