#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int start,step,times,i;
    scanf("start = %d, step = %d, times = %d",&start,&step,&times);
    for(i=1;i<times;++i){
        printf("%d ",start);
        start+=step;
    }
    printf("%d",start);
    return 0;
}

/**************************************************************
	Problem: 1090
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

