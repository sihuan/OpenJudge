#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define maxn 10000
char ori[maxn];
char s[maxn];

int main()
{
    int num = 0;
    while( gets(ori) != NULL ){
        int len = strlen(ori);
        for( int i = 0; i < len; i++ )
            s[i] = tolower(ori[i]);
        for( int i = 0; i < len; i++ )
        {
            char mrk1[100];
            char mrk2[100];
            int m = 1;
            int a,b,j;
            if( s[i] == '(' )
            {
                j = i-2;
                a = i+1;
                mrk1[0] = s[i+1];
                while( s[i] != ')' ){
                    if( s[i] == ' ' || s[i] == '-' ){
                      mrk1[m] = s[i+1];
                      m++;
                    }
                    i++;
                }
                b = i;
                mrk1[m] = '\0';
                int l = strlen(mrk1);
                mrk2[l] = '\0';
                while( l-- ){
                    mrk2[l] = s[j];
                    j--;
                }
                if( strcmp( mrk1,mrk2 ) == 0 && strlen(mrk1) ){
                    if( num == 0 )
                        puts("Abbreviation ==> Full Name");
                    num++;
                    printf("%d:",num);
                    int ll = strlen(mrk2);
                    int r = 10 - ll;
                    if( num >= 10 ) r-=1;
                    while( r-- )
                        printf(" ");
                    for( int i = 0; i < ll; i++ )
                        printf("%c",toupper(mrk2[i]));
                    printf(" ==> ");
                    for( int i = a; i < b; i++ )
                        printf("%c",ori[i]);
                    puts("");
                }
            }
        }
    }
    if( num == 0 )
        puts("There is no abbreviations in this text.");
    return 0;
}
/**************************************************************
	Problem: 1063
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:768 kb
****************************************************************/

