#include<stdio.h>
#include<math.h>
#include<string.h>
char change(char a[])
{
    int len;
    len=strlen(a);
    int i;
    for(i=0;i<=len;i++)
    {
        if(a[i]>='a')
            a[i]=a[i]-32;
    }
    return a;
}
int main()
{
    char c[21],s[21];
    int count=0;
    scanf("%s",c);
    getchar();
    change(c);
    while(scanf("%s",s)!=EOF)
    {
        count++;
        if(count<=5)
        {

            change(s);
        if(strcmp(c,s)==0)
        {
            printf("Welcome!\n");
            break;
        }

        else
            printf("Wrong!\n");
        }
        else
            printf("Out of limited!\n");

    }
    return 0;
}
/**************************************************************
	Problem: 1766
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

