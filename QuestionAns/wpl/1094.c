#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,n;
    char a[101];
    while(gets(a))
    {
        int j=0;
        n=strlen(a);
        for(i=n-1;isspace(a[i]);i--);
        {a[i+1]='\0';}
        for(i=0;isspace(a[i]);i++);
            {printf("%s\n",&a[i]);}
        if(strcmp(&a[i],"END")==0)
            break;
    }
    return 0;
}

/**************************************************************
	Problem: 1094
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

