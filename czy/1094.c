#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    unsigned long long int b=0,c=0,n=0,i=0,m=0,sum=0;;
    char a[2000];
    //scanf("%llu",&b);
   // getchar();
    while(1)
    {
       gets(a);
        int l=strlen(a);
        for(i=0;i<l;++i)
        {
            if(a[i]=='\t' ||a[i]=='\r' || a[i]=='\n' || a[i]=='\v' || a[i]=='\f' || a[i]==' ')
            {
                a[i]='.';
            }
            else break;
        }
        for(i=l-1;i>=0;--i)
        {
             if(a[i]=='\t' ||a[i]=='\r' || a[i]=='\n' || a[i]=='\v' || a[i]=='\f' || a[i]==' ')
            {
                a[i]='.';
            }
            else break;
        }
        for(i=0;i<l;++i)
        {
           if(a[i]!='.') printf("%c",a[i]);
        }

        printf("\n");
        for(i=0;i<l;++i)
        {
            if(a[i]=='E' && a[i+1]=='N' && a[i+2]=='D')
                return 0;
    }
    }

    return 0;
}

/**************************************************************
	Problem: 1094
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

