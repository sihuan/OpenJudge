#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,k=0,sum=0;
    while(scanf("%d",&n)!=EOF){
        sum+=n;
        k++;
    }
    double ans=(double)sum/(double)k;
    printf("%.3lf",ans);
    return 0;
}

/**************************************************************
	Problem: 1417
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

