#include<stdio.h>

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}	
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d", gcd(a, b), lcm(a, b));
    return 0;
}

/**************************************************************
	Problem: 1298
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

