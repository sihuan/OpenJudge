#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
//    freopen("out.txt","w",stdout);
    char instr[1000][101],judge[101];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",instr[i]);
    while(scanf("%s",judge)!=EOF)
    {
        int flag=1;
        for(int i=0;i<n;i++)
            if(!strcmp(instr[i],judge))
            {
                printf("Yes\n");
                flag=0;
                break;
            }
         if(flag)
            printf("No\n");
    }
}

/**************************************************************
	Problem: 2043
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:772 kb
****************************************************************/

