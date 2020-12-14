#include <stdio.h>
#include <stdlib.h>

double getR(double n)
{
    if(n<=2880) return n*0.48;
    else if(n<=4800) return (n-2880)*0.53 + 2880*0.48;
    else return (n-4800)*0.78 + 1920*0.53 + 2880*0.48;
}
int main()
{
    char name[50];
    double n;
    while(scanf("%s %lf",name,&n) != EOF)
    {
        printf("%s:%.2lf\n",name,getR(n));
    }

    return 0;
}

/**************************************************************
	Problem: 1211
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

