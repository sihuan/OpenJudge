#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_STR_LEN 105


int strToInt(char *s, int base)
{
    int n;
    int i=0, j;
    int ans=0;
    int f=1;
    char ch[105];

    if (s[0]=='-') {
        f=-1;
        i++;
    } else if (s[0]=='+') {
        f=1;
        i++;
    }
    n=strlen(s);
    for (j=0 ; i<n; i++) {
        if (isdigit(s[i]))
            ch[j++]=s[i];
        else if (isupper(s[i]) && s[i]<='F')
            ch[j++]=s[i];
        else if (islower(s[i]) && s[i]<='f')
            ch[j++]=toupper(s[i]);
    }
    ch[j]='\0';
    /*printf("%s\n", ch);*/
    n=strlen(ch);
    if (base<=10) {
        for (i=0; i<n; i++) {
            if (isdigit(ch[i]) && ch[i]-'0'<base) {
                ans*=base;
                ans+=ch[i]-'0';
            }
        }
    } else {
        for (i=0; i<n; i++) {
            if (isdigit(ch[i])) {
                ans*=base;
                ans+=ch[i]-'0';
            } else {
                ans*=base;
                ans+=ch[i]-'A'+10;
            }
        }
    }


    return f>0?ans:-ans;
}

int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

