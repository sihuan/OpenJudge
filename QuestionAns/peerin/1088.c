#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
n = abs(n);
if(n<100){
    printf("%d",n);
}
else{
    printf("%02d",n%100);
}
return 0;
}

/**************************************************************
	Problem: 1088
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

