#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void judge(char a[])
{   int i=0,b=0;
    for(i=0;i<strlen(a);i++)
    {
      b+=((int)a[i]-(int)'0');
     }
    if (b%3==0)  printf("Yes\n");
    else printf("No\n");
}
int main()
{    int i=0,c;
     char a[1000];
     scanf("%d",&c);
     getchar();
    while(c--)
    {    gets(a);
         judge(a);
    }
    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

