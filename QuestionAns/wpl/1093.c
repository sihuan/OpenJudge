#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,l,m,j=1;
    char a[50],b[50];
    scanf("%s",a);
    l=strlen(a);

    while(scanf("%s",b)!=EOF)
    {
        m=strlen(b);
        if(j>5)
        {
            printf("Out of limited!\n");
            continue;
        }
        for(i=0; i<=l-1; i++)
        {
            if(a[i]!=b[i]||m!=l)
            {
                printf("Wrong!\n");
                break;
            }
        }
        if(i==l&&a[l-1]==b[l-1])
        {
            printf("Welcome!\n");
            break;
        }
        j++;
    }

    return 0;
}
/**************************************************************
	Problem: 1093
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

