#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int M,s,l;
    scanf("%d",&M);
    int i,j;
    char a[666];
    for(i=0; i<M; i++)
    {
        s=0;
        scanf("%s",a);
        l=strlen(a);
        for(j=0; j<l; j++)
        {
            s=s+(a[j]-48);
        }
        if(s%3==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

