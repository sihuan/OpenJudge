#include<stdio.h>

int maxValue(int a,int b,int c)
{
        if (a>b){
        if (a>c){
            if (b>c){
                return a;
            }
            else
                return a;
        }
        else
            return c;
    }
    else{
        if (a>c)
            return b;
        else{
            if (b>c)
                return b;
            else
                return c;
        }
    }
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

