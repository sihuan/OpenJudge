#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int y,i,j,count,k,n;
    char a[1000];
    while(1)
    {
    gets(a);
    count=strlen(a);
    for(i=0;i<count;i++)
    {
        if(!isspace(a[i]))
        {
            k=i;
            break;
        }
        else
            continue;

    }
    for(i=count-1;i>=0;i--)
    {
        if(!isspace(a[i]))
        {
            y=i;
            break;
        }
        else
            continue;

    }
    for(j=k;j<=y;j++)
    {
        printf("%c",a[j]);
    }


    if(a[k]=='E'&&a[k+1]=='N'&&a[k+2]=='D')
    {
        break;
    }
    printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1094
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

