//2;1;5;4;3;7;6;10;9;8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, a;
    int m;

    while (scanf("%d", &i)==1 && i!=0) {
        int ans=0;
        for ( ; i>0; i--) {
            scanf("%d", &a);
            ans+=a;
        }
        printf("%d\n", ans);
    }
    return 0;
}

/**************************************************************
	Problem: 1044
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

