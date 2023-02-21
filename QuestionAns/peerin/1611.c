#include <stdio.h>

int get_array(int a[]){
    int size;
    scanf("%d",&size);
    int i;
    for(i = 0;i < size;++i){
        scanf("%d",a+i);
    }
    return size;
}

    int array_value(int a[],int n,int k){
        if(k<0){
            k = n+k;
        }
        return a[k];
    }


int main()
{
    int size, arr[1000], m, k;
    size = get_array(arr);
    while(scanf("%d", &k) != EOF)
        printf("%d\n", array_value(arr, size, k));
    return 0;
}
/**************************************************************
	Problem: 1611
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

