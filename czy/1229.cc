#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STR_LEN 109

  char *trim(char *str)
    {
        int i=0,k=0, l=0;
    for(i=0;;++i)
    {
        if(str[i]=='\0') break;
        ++l;
    }
    for(i=0;i<l;++i)
        {
            if(str[i]=='\t' ||str[i]=='\r' || str[i]=='\n' || str[i]=='\v' || str[i]=='\f' || str[i]==' ')
            {
                k++;
            }
            else break;
        }
        for(i=l-1;i>=0;--i)
        {
             if(str[i]=='\t' ||str[i]=='\r' || str[i]=='\n' || str[i]=='\v' || str[i]=='\f' || str[i]==' ')
            {
                str[i]='\0';
            }
            else break;
        }
        str=str+k;
        return str;
    }


int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
/**************************************************************
	Problem: 1229
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

