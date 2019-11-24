#include<stdio.h>
int is_vocals(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_vocals(ch) ? "It is a vocals."
                            : "It is not a vocals." )
          );
    return 0;
}
/**************************************************************
	Problem: 1289
	User: 201801020908
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

