#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main()
{
    int n[105]={0};
    int s[1005];
    int num=0;
    int i, j, k;
    int t;
    int ans;

    while (scanf("%d", &t)==1) {
        if (t>100 || t<0) {
            continue;
        }
        n[t]++;
    }
    ans=0;
    for (i=0; i<101; i++) {
        if (n[i]>ans)
            ans=n[i];
    }
    for (i=0; i<101; i++) {
        if (n[i]==ans)
            printf("%d\n", i);
    }


    return 0;
}

/**************************************************************
	Problem: 1178
	User: 201901060401
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

