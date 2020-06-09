    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #include <ctype.h>


    int main()
    {
        unsigned long long n;
        scanf("%llu", &n);
        printf("%llu", n%2==0 ? n/2*(1+n) : (1+n)/2*n);


        return 0;
    }
/**************************************************************
	Problem: 1015
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

