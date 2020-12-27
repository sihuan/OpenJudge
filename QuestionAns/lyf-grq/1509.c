#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char c;
    int  i;
    int allcharacter=0,xiaoxie=0,daxie=0;
    int digit=0,space=0,punct=0;
    int b[27]={0};
    while((c=getchar())!=EOF)
    {
        allcharacter++;
        {
            if(islower(c))
            {
                xiaoxie++;
                b[c-96]++;
            }
            else if(isupper(c))
            {
                daxie++;
                b[c-64]++;
            }
            else if(isdigit(c))
                    digit++;
            else if(isspace(c))
                    space++;
            else if(ispunct(c))
                    punct++;
        }
    }
    printf("All Characters : %d\n",allcharacter);
    printf("Lowers : %d\n",xiaoxie);
    printf("Uppers : %d\n",daxie);
    printf("Digits : %d\n",digit);
    printf("Spaces : %d\n",space);
    printf("Puncts : %d\n",punct);
    for(i=1;i<=26;i++)
    {
        printf("%c : %d\n",i+64,b[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1509
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

