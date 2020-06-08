
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    int i,n,len1,m,j;
     scanf("%d", &n);
for(j=0;j<n;j++)
{
    scanf("%s",s);
    len1=strlen(s);
    m=len1%3;
    if(m==0)
        m=3;
    if(len1<=3)
    for(i=0;i<len1; i++)
       printf("%c", s[i]);
    if(len1>3)
    {
      for(i=0; i<len1; i++)
    {
       printf("%c", s[i]);
       if(m==i+1&&i!=len1-1)
         {
        printf(",");
         m=m+3;
         }
    }
    }
            printf("\n");
}
    return 0;
}

/**************************************************************
	Problem: 1765
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

