#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //freopen("test.txt","r",stdin);
    double tot=0;
    double p,w,m;
    scanf("%lf%lf%lf",&p,&w,&m);
    if(m>2000){
        tot=p*w*500+p*w*(1000-500)*0.95+p*w*(2000-1000)*0.9+p*w*(m-2000)*0.88;
    }
    else if(m>=1001){
        tot=p*w*500+p*w*(1000-500)*0.95+p*w*(m-1000)*0.9;
    }
    else if(m>=501){
        tot=p*w*500+p*w*(m-500)*0.95;
    }
    else{
        tot=p*w*m;
    }
    printf("%.2lf",tot);
    return 0;
}

/**************************************************************
	Problem: 2412
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

