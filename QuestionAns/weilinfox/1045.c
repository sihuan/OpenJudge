//2;1;5;4;3;7;6;10;9;8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, a;
    int m=0;

    int b;
    scanf("%d", &b);
    while (b>0) {
        int ans=0;
        scanf("%d", &i);
        for ( ; i>0; i--) {
            scanf("%d", &a);
            ans+=a;
        }
        if (m==0){
            printf("%d", ans);
            m=1;
        } else {
            printf("\n\n%d", ans);
        }
        b--;
    }
    return 0;
}

/**************************************************************
	Problem: 1045
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

