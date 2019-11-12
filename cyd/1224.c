#include <stdio.h>

  int maxValue(int a,int b,int c)
    {
        if(a>=b&&b>=c)      return a;
        else if(a>=c&&c>=b) return a;
        else if(b>=c&&c>=a) return b;
        else if(b>=a&&a>=c) return b;
        else if(c>=b&&b>=a) return c;
        else if(c>=a&&a>=b) return c;

    }


int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
/**************************************************************
	Problem: 1224
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

