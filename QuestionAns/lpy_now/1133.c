#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 11
int strToInt(char str[])
  {
   int i,a=0;
if(str[0]=='\0')//保证空行时返回-1；

     return -1;

  else

  {

for(i=0;str[0]!='\0';i++)

 {
    if(str[i]>='0'&&str[i]<='9')
  {
     a=a*10+str[i]-'0';
    }
   else
      break;
 }
  return a;

 }
}



int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}

/**************************************************************
	Problem: 1133
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

