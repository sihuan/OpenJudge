#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int t;
    int sum=0;
    scanf("%d%d%d", &a, &b, &c);



    if (c%2==0) {
        sum += c;
    } else {
        sum += c+1;
    }
    if (b%2==0) {
        sum += b;
    } else {
        sum += b+1;
    }
    if (a%2==0) {
        sum += a;
    } else {
        sum += a+1;
    }




    printf("%d", sum);

    return 0;
}

/**************************************************************
	Problem: 1402
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

