#include<stdio.h>
#define MAX_STR_LEN 104
char change(char ch)
{
    //ch = getchar();
    if ((ch>='a') && (ch<='z'))
    {
        //ch = ch - 32;
        ch = ch - ('a'-'A');
    }
}
int str_cmp(char *s1, char *s2)
{
    char * p1;
    char *p2;
    char c1,c2;
    p1=s1;
    p2=s2;
    int tmp;
    while(*p1!='\0'||*p2!='\0')
    {
        c1=*p1;
        c2=*p2;
        *p1=change(*p1);
        *p2=change(*p2);

        if(*p1!=*p2)
        {

            tmp=(int)(c1-c2);
            return tmp;
        }
        p1++;
        p2++;
    }
    return 0;
}

int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1139
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

