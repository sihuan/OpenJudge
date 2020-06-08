#include <stdio.h>
#include <stdlib.h>
int chseq(char ch)
{
    int k=1;
    int i;
    if(ch>='A'&&ch<='Z')
    for(i='A';i<='Z';i++,k++)
         if(i==(int)ch)
            break;
    if(ch>='a'&&ch<='z')
            for(i='a';i<='z';i++,k++)
         if(i==(int)ch)
            break;

    return k;
}
output(char ch, int n)
{
    int a;
    a=n%10;
    if(a==1)
printf("%c is %dst character.",ch,n);
 if(a==2)
 printf("%c is %dnd character.",ch,n);
   if(a==3)
 printf("%c is %drd character.",ch,n);
if(a>3||a==0)
     printf("%c is %dth character.",ch,n);
}

int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

/**************************************************************
	Problem: 1609
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

