#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
int main()
{
    char a[1009];
    while(gets(a)!=NULL)
    {
        int l=strlen(a);
        int i,j,k;
        int sum=0;
        for(i=0;i<l;++i)
        {
            if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
            {
                sum++;
                for(k=i;k<l;++k)
                {
                    if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')) ++i;
                    else break;
                }
            }
        }
        printf("%d\n",sum);
    }

}

/**************************************************************
	Problem: 1169
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

