#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, a;

    while (scanf("%d", &i)==1) {
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
	Problem: 1042
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

