#include <stdio.h>
#include <string.h>
void Print(char name[],int score)
{
    printf("%8s |",name);
    int i;
    for(i=0; i<score; ++i)
    {
        putchar('=');
    }
    putchar('\n');
}
int main()
{

    int n;
    scanf("%d",&n);
    char name[9];
    int score;
    int i;
    for(i=0; i<n; ++i)
    {
        scanf("%s%d",name,&score);
        Print(name,score);
    }
    return 0;
}

/**************************************************************
	Problem: 1246
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

