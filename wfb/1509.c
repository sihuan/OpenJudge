#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i;
    char n;
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // LOCAL
    int total=0;
    int lowers=0;
    int uppers=0;
    int digits=0;
    int spaces=0;
    int puncts=0;
    int A_Z[26]={0};
    while((n=getchar()) != EOF)
    {
        ++total;
         if(islower(n))
            ++lowers;
        else if(isupper(n))
            ++uppers;
        else if(isdigit(n))
            ++digits;
        else if(isspace(n))
            ++spaces;
        else if(ispunct(n))
            ++puncts;
        if(n>='A' && n<='Z')
        {
            ++A_Z[n-'A'];
        }
        if(n>='a' && n<='z')
        {
            ++A_Z[n-'a'];
        }
    }
    printf("All Characters : %d\n",total);
    printf("Lowers : %d\n",lowers);
    printf("Uppers : %d\n",uppers);
    printf("Digits : %d\n",digits);
    printf("Spaces : %d\n",spaces);
    printf("Puncts : %d\n",puncts);
    for(i=0; i<26; ++i)
    {
        printf("%c : %d\n",'A'+i,A_Z[i]);
    }

    return 0;
}

/**************************************************************
	Problem: 1509
	User: 201601011420
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

