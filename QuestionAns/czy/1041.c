#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 
  
int gcd(int a,int b) 
{ 
    if(b>a) {int temp=a;a=b;b=temp;} 
    while (b!=0) 
    { 
  
  
        //if(a%b==0) return b; 
        a=a%b; 
        if(b>a) {int temp=a;a=b;b=temp;} 
    } 
    return a; 
} 
  
int lcm(int a,int b) 
{ 
    if(a==0 || b==0) return 0; 
    int m=a ,n=b; 
    return a*b/gcd(a, b); 
} 
  
  
int main() 
{ 
    int a, b; 
    while(scanf("%d %d", &a, &b) != EOF) 
        printf("%d %d\n", gcd(a, b), lcm(a, b)); 
    return 0; 
}
/**************************************************************
	Problem: 1041
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

