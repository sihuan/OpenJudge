#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int k,s,n;
scanf("%d",&k);
s = 0;
int i = 0;
for(i = 0;i<k;++i){
    scanf("%d",&n);
    s += n;
}
printf("%.3f",s/(double)k);
return 0;
}

/**************************************************************
	Problem: 1416
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

