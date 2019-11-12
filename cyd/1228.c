#include <stdio.h>
int gcd(int a, int b)
{
    int c,e,f;
if(a==b&&a==0)return 1;
            if(a<b)
            {
            c=a;
            a=b;
            b=c;
            }
    while(1)
    {
        if(b==0)return a;
        e=a%b;
        if(e==0){f=b;
            return f;}
        else
        {
            a=b;
            b=e;
        }
    }
 
}
 
int lcm(int a, int b)
{
    int i,c;
   c=a/gcd(a,b)*b;
   return c;
}
 

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1228
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

