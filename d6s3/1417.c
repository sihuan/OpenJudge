#include<stdio.h>
int main()
{
    int i=0;
    double k,s=0;
    while(scanf("%lf",&k) != EOF){
        i++;
        s += k;
    }
    printf("%.3lf",s/i);
}

/**************************************************************
	Problem: 1417
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

