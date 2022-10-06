#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char inp[110][60],temp[60];
//    gets(inp[0]);
//    gets(inp[1]);
//    printf("%d",strcmp(inp[0],inp[1]));
    int i=0;
    while(gets(inp[i])!=NULL)
        i++;
    int j,k;
    for(j=0;j<i-1;j++)
        for(k=0;k<i-j-1;k++)
        {
            if(strcmp(inp[k],inp[k+1])<0)
            {
                strcpy(temp,inp[k]);
                strcpy(inp[k],inp[k+1]);
                strcpy(inp[k+1],temp);
            }
        }
    for(j=i-1;j>=0;j--)
        puts(inp[j]);
}
/**************************************************************
	Problem: 2522
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

