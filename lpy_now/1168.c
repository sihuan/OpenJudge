#include<stdio.h>

int main(){
    int z,x,i,N,temp,j;
    scanf("%d",&N);
    for(j=0;j<N;++j){
        scanf("%d%d",&z,&x);
        if(z>x){
            temp=z,z=x,x=temp;
        }
        for(i=z;i<x;++i){
            printf("%d ",i);
        }
        printf("%d\n",x);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1168
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

