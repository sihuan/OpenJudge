#include <stdio.h> 
  
int gcd(int a,int b) 
{ 
    if(b>a) {int temp=a;a=b;b=temp;} 
    if (b==0) 
    { 
  return a;
  }
  else
  {
        //if(a%b==0) return b; 
        a=a%b; 
        return gcd(a,b);
    } 
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
   scanf("%d %d", &a, &b) ;
        printf("%d %d\n", gcd(a, b), lcm(a, b)); 
    return 0; 
}
/**************************************************************
	Problem: 1298
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

