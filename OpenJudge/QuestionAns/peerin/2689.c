#include <stdio.h>
#include <stdlib.h>
// 1 2 3 5 8 13...
unsigned long long table[100000]={0,1,2,3,5,8,13,0};
unsigned long long fr(int n){
if(table[n]==0){
    table[n-1]=fr(n-1);
    table[n-2]=fr(n-2);
    table[n]=table[n-1]+table[n-2];
    return table[n];
}else{
return table[n];
}
}

int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long res = fr(n);
    printf("%llu",res);
    return 0;
}


/**************************************************************
	Problem: 2689
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:1528 kb
****************************************************************/

