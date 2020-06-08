#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,t,n,w,k=0;
    scanf("%d",&t);
    char str[1001],hua[100];
    for(i=0; i<t; i++)
    {
        k=0;
        strcpy(hua,"");
        scanf("%d",&n);
        getchar();
        for(j=0; j<n; j++)
        {
            gets(str);
            hua[k]=str[0];
            k++;
        }
        for(w=0;w<k;w++)
        {
         printf("%c",hua[w]);
        }
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 1653
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

