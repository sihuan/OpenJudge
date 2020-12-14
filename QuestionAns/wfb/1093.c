#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0;
    char pass[20];
    scanf("%s",pass);
    char input[20];
    while(scanf("%s",input) != EOF)
    {
        ++cnt;
        if(cnt > 5)
            printf("Out of limited!\n");
        else
        {
            if(strcmp(pass,input) == 0)
            {
                printf("Welcome!\n");
                break;
            }
            else
                printf("Wrong!\n");
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1093
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

