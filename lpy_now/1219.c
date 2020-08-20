#include<stdio.h>

int main(){
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF){
        double k=b/((a/100)*(a/100));
        printf("%.2f ",k);
        if(k>=40){
            printf("extra heavy");
        }
        else if(k>=30){
            printf("super heavy");
        }
        else if(k>=25){
            printf("heavy");
        }
        else if(k>=19){
            printf("health");
        }
        else{
            printf("lower");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1219
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

