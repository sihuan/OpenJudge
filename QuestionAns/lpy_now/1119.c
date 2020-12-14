#include<stdio.h>

int main(){
    int n;
    int max,min;
    while(scanf("%d",&n)){
        if(n==0){
            return 0;
        }
        int num;
        scanf("%d",&num);
        max=num,min=num;
        int i;
        for(i=1;i<n;++i){
            scanf("%d",&num);
            if(num>max){
                max=num;
            }
            if(num<min){
                min=num;
            }
        }
        printf("%d\n",2*(max-min));
    }
    return 0;
}

/**************************************************************
	Problem: 1119
	User: 201901061011
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

