#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char c[100],B[100];
    int i=0,n;
    scanf("%s",c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
    if(c[i]>='A'&&c[i]<='Z')
       {
           c[i]=155-c[i];
       }
        /*利用相加和的关系*/
    if(c[i]>='a'&&c[i]<='z')
        {
            c[i]=219-c[i];
        }


    }

    printf("%s",c);
}

/**************************************************************
	Problem: 1374
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

