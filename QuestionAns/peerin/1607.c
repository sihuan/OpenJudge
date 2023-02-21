#include <stdio.h>

int get_nums(int *n){
    *n = 0;
    int nu;
    while(scanf("%d",&nu)!=EOF){
        (*n)++;
        //printf("%d\n",nu);
    }
    return 0;
}


int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

