#include<stdio.h>

int main(){
    int a[5];
    register int i,j;
    for(i=0;i<=2;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;++i){
        for(j=0;j<2-i;++j){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j+1],a[j+1]=a[j],a[j]=temp;
            }
        }
    }
    for(i=0;i<2;++i){
        printf("%d ",a[i]);
    }
    printf("%d",a[2]);
    return 0;
}

/**************************************************************
	Problem: 1287
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

