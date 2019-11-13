#include <stdio.h>
#include <stdlib.h>

int is_daffodil(int n)
{
    if(n<100 || n>=1000) return 0;
    else
    {
        int o = n%10;
        int t = n/10%10;
        int h = n/100;
        if(o*o*o+t*t*t+h*h*h == n)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
/**************************************************************
	Problem: 1278
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

