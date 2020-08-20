#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001]={0},a[1001]={0};
    int i,j=0,k;
    //char str[1001]={0};
    while(gets(str)!=NULL)
    {

        for(i=0,j=0;i<strlen(str);i++)
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&& str[i]<='9'))
            {
                a[j]=str[i];
                j++;
            }

        }
        a[j]='\0';

        for(k=0;k<strlen(a);k++)
        {
            if(a[k]>='A'&&a[k]<='Z')
                a[k]=a[k]-'A'+'a';
        }

        for(i=0,j=strlen(a)-1;i<=j;i++,j--)
        {
            if(a[i]!=a[j])break;
        }

        if(i<j)
            printf("No.\n");
        else
            printf("Yes.\n");
    }




}
/**************************************************************
	Problem: 1061
	User: 201901061011
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

