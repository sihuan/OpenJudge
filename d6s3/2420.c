#include <stdio.h>

int main()
{
    unsigned long long s, k;
    int i;
    while(scanf("%llu", &k) != EOF){
        if(k%2 == 0)
            s = k/2+k/2*k;
        else
            s = ((1+k)/2)*k;
        printf("%llu\n", s);
    }
}

/**************************************************************
	Problem: 2420
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

