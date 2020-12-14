#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get_array(int a[],int n){
    int i;
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
}
void shift_array(int a[],int n){
    int temp=a[0];
    int i;
    for(i=1;i<n;++i){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
void put_array(int a[],int n){
    int i;
    for(i=0;i<n;++i){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(" ");
        }
    }
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    get_array(a, n);
    shift_array(a, n);
    put_array(a, n);
    return 0;
}

/**************************************************************
	Problem: 2417
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

