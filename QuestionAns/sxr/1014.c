#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[20];
    int l[20];
    int i=0, m=0;
    scanf("%s",s);
    while (i<strlen(s))
        {if((s[i]!= 40) && (s[i] != 41) &&(s[i] !=45))
        {l[m]=s[i]-48;
         m++;
        }
         i++;
         }
    if(l[0]==0)
    {
        printf("0086");
        for(int m=1;m<strlen(s)-3;m++)
            printf("%d",l[m]);
    }
    else {printf("0086");
          for(int m=0;m<strlen(s)-3;m++)
            printf("%d",l[m]);}
    return 0;
}
/**************************************************************
	Problem: 1014
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

