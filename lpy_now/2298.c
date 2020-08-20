#include<stdio.h>

void add(int N){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    if(N==1){
        return ;
    }
    add(N-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

/**************************************************************
	Problem: 2298
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

