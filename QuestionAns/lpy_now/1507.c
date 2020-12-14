#include<stdio.h>

inline int abs(int x){
    if(x<0){
        return -x;
    }
    return x;
}

int main(){
    double a;
    scanf("%lf",&a);
    if(a>=0){
        printf("%d",(int)(a+0.5));
    }
    else{
        printf("%d",(int)(a-0.5));
    }
    return 0;
    //巧妙运用取整规则
}

/**************************************************************
	Problem: 1507
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

