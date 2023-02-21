#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define MAX_STR_LEN 101

int main()
{
    char a[1009];
    char b[1009];
    char c[1009];
    while(gets(a)!=NULL)
    {
        int l=strlen(a);
        int i,j,k,m=0;
        for(i=0;i<l;++i)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                b[m]=a[i];
                ++m;
            }
            if(a[i]>='a' && a[i]<='z')
            {
                b[m]=a[i]-'a'+'A';
                ++m;
            }
            if(a[i]>='0' && a[i]<='9')
            {
                b[m]=a[i];
                ++m;
            }
        }
        b[m]=0;
       // printf("%s\n",b);
        l=strlen(b);
        int x=0;
        for(i=l-1;i>=0;--i)
        {
            char temp=b[i];
            c[x]=temp;
            ++x;
        }

        c[x]=0;
        //printf("%s",c);
        if(strcmp(b,c)==0) printf("Yes.\n");
        else printf("No.\n");
    }
    return 0;
}


/**************************************************************
	Problem: 1061
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

