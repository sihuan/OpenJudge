#include<stdio.h>

int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        int a=n%10;
        if(a==1){
            printf("%dst\n",n);
        }
        else if(a==2){
            printf("%dnd\n",n);
        }
        else if(a==3){
            printf("%drd\n",n);
        }
        else{
            printf("%dth\n",n);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1098
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

