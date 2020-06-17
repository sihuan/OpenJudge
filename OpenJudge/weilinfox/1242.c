#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    char ch[50];
    unsigned long long ans;
    unsigned long long power(int);

    while (scanf("%s", ch)==1) {
        ans=0;
        for (i=0; i<strlen(ch); i++) {
            ans+=(unsigned long long)(ch[strlen(ch)-1-i]-'0')*power(i);
        }
        printf("%llu\n", ans);
    }


    return 0;
}

unsigned long long power(int i)
{
    unsigned long long ans=1;
    while (i--) {
        ans*=2;
    }
    return ans;
}

/**************************************************************
	Problem: 1242
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

