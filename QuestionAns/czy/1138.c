#include<stdio.h>
#include <math.h>
#define MAX_STR_LEN 109

int strlen(char *s)
{
    int i=0,k=0;
    for(i=0;i<109;++i)
    {

        if(s[i]=='\0')
        {
            break;
        }
        ++k;
    }
    return k;
}

int str_cmp(char s1[], char s2[])
{
    int l1=0,l2=0;
    l1=strlen(s1);
    l2=strlen(s2);
    //printf("%d %d\n",l1,l2);
    if(l1>l2)
    {
        int i=0,flag=0;
        for(i=0;i<l2;++i)
        {
            if(s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) if(flag==0) return (int)s1[l2];
            return s1[i]-s2[i];
            }

    else if(l1<l2)
    {
        int i=0,flag=0;
        for(i=0;i<l1;++i)
        {
            if(s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) return -1*(int)s2[l1];
            return s1[i]-s2[i];
            }

    else
    {
        int i=0,flag=0;
        for(i=0;i<l1;++i)
        {
            if(s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) return 0;
        else return s1[i]-s2[i];
            }

}


int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1138
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

