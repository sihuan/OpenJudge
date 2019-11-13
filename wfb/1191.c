#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 100
typedef char string[20] ;

void Print(string name[],string *n)
{
    string *p;
    for(p=name; p<n; ++p)
    {
        if(p != name) putchar(',');
        printf("%s",*p);
    }
}
void PrintAns(string win[],string *w,string los,string *l)
{
    Print(win,w);
    printf(" win ");
    Print(los,l);
    puts(".");
}
int main()
{
    string Scissors[MAX_STR_LEN]; string *S;
    string Paper[MAX_STR_LEN]; string *P;
    string Rock[MAX_STR_LEN]; string *R;
    string name[10];
    string temp;
    int m,n;
    scanf("%d%d",&m,&n);
    getchar();
    int i,j;
    for(i=0; i<n; ++i)
        scanf("%s",&name[i]);
    for(i=0; i<m; ++i)
    {
        P = Paper;
        S = Scissors;
        R = Rock;
        getchar();
        for(j=0; j<n; ++j)
        {
            scanf("%s",&temp);
            if(strcmp(temp,"Rock") == 0)
                strcpy(*R++,name[j]);
            else if(strcmp(temp,"Scissors") == 0)
                strcpy(*S++,name[j]);
            else if(strcmp(temp,"Paper") == 0)
                strcpy(*P++,name[j]);
        }
        if(S != Scissors && P != Paper && R != Rock)
            puts("No winner, no loser.");
        else if(P != Paper && S == Scissors && R == Rock ||
                P == Paper && S != Scissors && R == Rock ||
                P == Paper && S == Scissors && R != Rock)
                    puts("Tie.");
        else if(P != Paper && S != Scissors && R == Rock)
            PrintAns(Scissors,S,Paper,P);
        else if(P == Paper && S != Scissors && R != Rock)
            PrintAns(Rock,R,Scissors,S);
        else if(P != Paper && S == Scissors && R != Rock)
            PrintAns(Paper,P,Rock,R);
    }

    return 0;
}

/**************************************************************
	Problem: 1191
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

