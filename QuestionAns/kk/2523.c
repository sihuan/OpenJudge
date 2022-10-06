#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
char key_alpha[26][5]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
char key_num[8][4]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int main()
{
    char inp[20001];
    while(gets(inp)!=NULL)
    {
        int n;
        n=strlen(inp);
        for(int i=0;i<n;i++)
        {
            if(isalpha(inp[i]))
                inp[i]=toupper(inp[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(isspace(inp[i]))
            {
                printf("0");
                continue;
            }
            if(i>0)
            {
                int x=-1,y=-2;
                for(int j=0;j<8;j++)
                    for(int k=0;k<4;k++)
                        if(inp[i]==key_num[j][k])
                            x=j;
                for(int j=0;j<8;j++)
                    for(int k=0;k<4;k++)
                        if(inp[i-1]==key_num[j][k])
                            y=j;
                if(x==y)
                    printf("1");
            }
            printf("%s",key_alpha[inp[i]-'A']);
        }
        printf("\n");
        memset(inp,0,sizeof(inp));
    }
}

/**************************************************************
	Problem: 2523
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

