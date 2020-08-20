#include<stdio.h>
#define MAX_SIZE 1100

int getarray(int arr[]){
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    return n;
}
int find(int arr[],int n,int val){
    int i;
    for(i=0;i<n;++i){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}
int main()
{
    int cases, i;
    int arr[MAX_SIZE], size;
    int val, found = 0;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size  = getarray(arr);
        scanf("%d", &val);
        found = find(arr, size, val);
        if(found == -1)
        {
            printf("NOT FOUND\n");
            continue;
        }
        printf("%d\n", found);
    }
    return 0;
}
/**************************************************************
	Problem: 1255
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

