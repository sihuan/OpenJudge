#include<stdio.h>

int main(){
    int num[50];
    int i;
    int max;
    scanf("%d",&num[0]);
    max=num[0];
    int max1;
    max1=num[0];
    for(i=1;i<15;++i){
        scanf("%d",&num[i]);
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<max1){
            max1=num[i];
        }
    }
    for(i=0;i<15;++i){
        if(num[i]>max1 && num[i]!=max){
            max1=num[i];
        }
    }
    printf("%d",max1);
    return 0;
}

/**************************************************************
	Problem: 2421
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

