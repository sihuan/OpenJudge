#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define MAX_STR_LEN 101

int main()
{
    int n,x,y;
    scanf("%d",&n);
    int i=0;
//freopen("123.txt","w",stdout);
    char a[10009];
    char b[10009];
    for(i=0;i<n;++i)
    {
        scanf("%d%d",&x,&y);
        getchar();
        int j=0,m=0;
        for(j=0;j<x;++j)
        {
            gets(a);
            m=0;
            int l=strlen(a);
            int k;
            for(k=0;k<l;++k)
            {
                if(a[k]>='a' && a[k]<='z') a[k]=a[k]-'a'+'A';
            }
            for(k=0; k<l; ++k)
            {
                if(a[k]>='A' && a[k]<='Z')
                {
                    if(y>0)
                    {
                        a[k]=a[k]+y;
                        if(a[k]>'Z') a[k]=a[k]-26;
                        b[m]=a[k];
                        ++m;
                    }
                    else
                    {
                        a[k]=a[k]+y;
                        if(a[k]<'A') a[k]=a[k]+26;
                        b[m]=a[k];
                        ++m;
                    }
                }
            }
            b[m]=0;
            int ll=strlen(b);

            printf("%d %s\n",ll,b);

        }
       //if(i<n-1) getchar();
        puts("");
    }

    return 0;
}


/**************************************************************
	Problem: 1062
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

