#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,i,k,sum=0;
    scanf("%d",&k);
    for(i=0;i<k;++i){
        scanf("%d",&n);
        sum+=n;
    }
    double ans=(double)sum/(double)k;
    printf("%.3lf",ans);
    return 0;
}

/**************************************************************
	Problem: 1416
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

