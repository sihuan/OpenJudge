#include<stdio.h>
#include<string.h>
   int main()
    {   char c,d;
        char a[29];
        char b[29];
        gets(a);
        gets(b);
        long len1=strlen(a);
        long len2=strlen(b);
        if(len1>=len2)
        {puts(a);
         puts(b);
        }

        else {puts(b);
             puts(a);}


 return 0;
    }

/**************************************************************
	Problem: 1017
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

