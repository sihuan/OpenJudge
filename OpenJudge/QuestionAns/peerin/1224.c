#include <stdio.h>



int maxValue(int a,int b,int c){

  return a>=b?a>=c?a:c:b>=c?b:c;

  

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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

