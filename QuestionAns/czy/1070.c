#include<stdio.h>
#include"string.h"
#include"ctype.h"
int dg=0;
char a[2009];
char temp[2009];
int n=0;
int main()
{
    while(gets(temp)!=NULL)
    {
        int l=strlen(temp);
        int i;
        for(i=0;i<l;++i)
        {
            if(!isspace(temp[i]))
            {
                a[n]=temp[i];
                ++n;
            }
        }
    }
    a[n]=0;
    int k,kl;
    for(k=0;k<n;++k)
    {
        printf("%c",a[k]);
        if(a[k]==',') printf(" ");
        if(k<n-1 && a[k+1]=='{') printf(" ");
        if(a[k]=='{')
            {
                dg++;
                puts("");
                for(kl=0;kl<dg;++kl) printf("    ");
            }
            if(a[k]==';')
            {
                puts("");
                if(a[k+1]=='}'&&k+1<n)
                {
                    for(kl=0;kl<dg-1;++kl) printf("    ");
                }
                else
                {
                    for(kl=0;kl<dg;++kl) printf("    ");
                }
            }
            if(a[k]=='}')
            {
                --dg;
                //if(k+1<n && a[k+1]==';');
                //else puts("");
            }

    }
}

/**************************************************************
	Problem: 1070
	User: 201601160202
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:752 kb
****************************************************************/

