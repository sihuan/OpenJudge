#include<stdio.h>
int maxValue(int a,int b,int c){
if (b>a){
a = b;
}
if (c>a){
a = c;
}
return a;
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
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

