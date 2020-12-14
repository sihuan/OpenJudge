#include<stdio.h>

int mz(int n){
    if((n-1)%3==0&&(n-2)%4==0&&(n-3)%5==0){
        return 1;
    }else
    {
        return 0;
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(mz(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1275
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

