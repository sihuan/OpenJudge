#include <stdio.h>
int gcd(int A,int B)
{
    int t;
    if(A<=B)
    {
        t=A;
		A=B;
		B=t;
    }
    if(A%B==0)
        return B;
    else
    {
        A=A-B;
        return gcd(A,B);
    }
}
int lcm(int A,int B)
{
    return (A/gcd(A,B))*B;
}
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    printf("%d %d\n",gcd(A,B),lcm(A,B));
    return 0;
}
/**************************************************************
	Problem: 1298
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

