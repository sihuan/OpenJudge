#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 1001
int cmp(void *a,void *b)
{
    return *(int *)a>*(int *)b;
}
int getkey(int key[])
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&key[i]);
    }
     
    return n;
}
int getarray(int array[])
{
    int i;
    for(i=0;i<1001;i++){
        array[i]=0;
    }
         
    for(i=0;;i++){
        scanf("%d",&array[i]);
        if(array[i]==0)
            break;
    }
}
int insert(int array[], int key, int vol)
{
    int i,flag=1,cnt;
    int static j;
    for(i=0;;i++){
        if(array[i]==0)
            break;
    }
     
    j=i-1;
     
    for(i=0;;i++){
        if(array[999]!=0){
            flag=-1;
            break;
        }
        if(array[i]==key){
            flag=-2;
            break;
        }
        if(array[i]>key){
            flag=i;
            array[++j]=key;
            qsort(array,j+1,sizeof(int),cmp);
            break;
        }
        if(array[i]<key&&array[i+1]==0){
            flag=i+1;
            array[++j]=key;
            qsort(array,j+1,sizeof(int),cmp);
            break;          
        }
    }
    return flag;
}
int result(int flag)
{
    if(flag==-2)
        printf("The key is already in this array!\n");
    else if(flag==-1)
        printf("The array if full!\n");
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

