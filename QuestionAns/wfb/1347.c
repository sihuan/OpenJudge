#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("yes");
        break;
    default :
        printf("no");
    }
    return 0;
}

/**************************************************************
	Problem: 1347
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

