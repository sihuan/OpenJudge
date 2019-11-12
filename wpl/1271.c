#include <stdio.h>
#include <stdlib.h>

int digit_sum(int num)
{
    int z,d,s;
    if(num<10)
        return num;
    d=num;
    while(d>=10)
    {
        z=0;
        while(d>0)
        {
            s=d%10;
            d=(d-s)/10;
            z=z+s;
        }
        d=z;
    }
    return d;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

