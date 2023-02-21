#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n,sum;
    sum = 0;
    int count = 0;
while(scanf("%d",&n)!=EOF){
    sum+=n;
    count++;
}
printf("%.3f",sum/(double)count);
return 0;
}

/**************************************************************
	Problem: 1417
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

