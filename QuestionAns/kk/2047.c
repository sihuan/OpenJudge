#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char broken[50];
void stor(char ch)
{
    if(isalpha(ch))
        ch=toupper(ch);
    int flag=1,i=0,n;
    n=strlen(broken);
    while(broken[i]!=0)
    {
        if(ch==broken[i])
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag)
        broken[n]=ch;

}
int main()
{
    char example[30001],test[30001];
    scanf("%s",example);
    while(scanf("%s",test)!=EOF)
    {
        int i=0,j=0,len;
        len=strlen(example);
        for(i=0;i<len;i++)
        {
            if(example[i]==test[j])
                j++;
            else
                stor(example[i]);
        }
        puts(broken);
        memset(broken,0,sizeof(broken));
    }
}

/**************************************************************
	Problem: 2047
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

