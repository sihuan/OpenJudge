#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,s,scor;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char name[8];
        scanf("%s %d",name,&scor);
        s=strlen(name);
        for(j=0;j<8-s;j++)
            printf("%c",' ');
        printf("%s |",name);
        for(j=0;j<scor;j++)
            printf("%c",'=');
        printf("\n");

    }
}

/**************************************************************
	Problem: 1246
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

