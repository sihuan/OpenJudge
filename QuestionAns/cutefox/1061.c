#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Reverse(char str[], char ptr[])
{
    int n=strlen(str);
    int i;
    for(i=0; i<=n; i++)
    {
        ptr[i]=str[n-i-1];
    }
    ptr[i-1]='\0';
    if(strcmp(ptr,str)==0)
        puts("Yes.");
    else
        puts("No.");
}
int main()
{
    int i,j,n,x;
    char str[1001],str2[1001];
    char ptr[1001];
    while(gets(str)!=NULL)
    {
        j=0;
        n=strlen(str);
        for(i=0; i<n; i++)
        {
            if(str[i]>='0'&&str[i]<='9'||str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
                if(str[i]>='A'&&str[i]<='Z')
                {
                    str[i]=str[i]+'a'-'A';
                    str2[j]=str[i];
                    j++;
                }
                else
                {
                    str2[j]=str[i];
                    j++;
                }

        }
        str2[j]='\0';
        Reverse(str2,ptr);
    }

}

/**************************************************************
	Problem: 1061
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

