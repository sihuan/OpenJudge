#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char ch[1000000];
char s[1000000];

int main()
{
    int num = 0;
    int i, j, l, k;

    while(gets(ch)!=NULL){
        for(i=0; i<strlen(ch); i++)
            s[i] = tolower(ch[i]);
        for(i=0; i<strlen(ch); i++)
        {
            char ch1[100];
            char ch2[100];
            int m=1, r;
            int a,b;
            if(s[i]=='(')
            {
                j = i-2;
                a = i+1;
                ch1[0] = s[i+1];
                while(s[i]!=')'){
                    if(s[i]==' ' || s[i]=='-'){
                      ch1[m]=s[i+1];
                      m++;
                    }
                    i++;
                }
                b = i;
                ch1[m] = '\0';
                l = strlen(ch1);
                ch2[l] = '\0';
                while(l--){
                    ch2[l]=s[j];
                    j--;
                }
                if(strcmp(ch1, ch2)==0 && strlen(ch1)) {
                    if(num==0)
                        printf("Abbreviation ==> Full Name\n");
                    num++;
                    printf("%d:",num);
                    k = strlen(ch2);
                    int r = 10 - k;
                    if(num>=10) r-=1;
                    while(r--)
                        printf(" ");
                    for(i=0; i<k; i++)
                        printf("%c",toupper(ch2[i]));
                    printf(" ==> ");
                    for(i=a; i<b; i++)
                        printf("%c",ch[i]);
                    putchar('\n');
                }
            }
        }
    }
    if(num==0)
        printf("There is no abbreviations in this text.");
    return 0;
}

/**************************************************************
	Problem: 1063
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:2700 kb
****************************************************************/

