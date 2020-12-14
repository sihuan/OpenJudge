#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    char ch[105];
    int ans;

    scanf("%d", &n);
    while (n--) {
        scanf("%s", ch);
        ans=0;
        for (i=0; i<strlen(ch); i++) {
            ans+=ch[i]-'0';
        }
        if (ans%3==0)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

