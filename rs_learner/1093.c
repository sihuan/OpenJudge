#include<stdio.h>
#include<string.h>
int main()
{
    int m,i=1;
    char a[21],b[21];
    gets(a);
    while(scanf("%s",b)!=EOF)
    {
        if(i>5)
        {
            printf("Out of limited!\n");
        }
        else
        {
        m=strcmp(a,b);
        if(m==0)
        {
            printf("Welcome!\n");
            break;
        }
        else
        {
            printf("Wrong!\n");
            i++;
        }
        }




    }
    return 0;
}
/**************************************************************
	Problem: 1093
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

