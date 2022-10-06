#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char inch;
    int answer,incal;
    while(scanf("%d",&answer)!=EOF)
    {
        while(scanf("%c",&inch),inch!='=')
        {
            if(inch=='+')
            {
                scanf("%d",&incal);
                answer=answer+incal;
            }
            else
            {
                scanf("%d",&incal);
                answer=answer-incal;
            }
        }
        printf("%d\n",answer);
    }
}

/**************************************************************
	Problem: 2037
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

