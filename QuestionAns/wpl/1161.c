#include <stdio.h>

int main()

{
    char c,m;
    int d;
     scanf("%c%d",&c,&d);
    m=(c-'A'+d)%26+'A';
    printf("%c",m);
    return 0;
}

/**************************************************************
	Problem: 1161
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

