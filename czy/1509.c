#include<stdio.h>
#include<string.h>
#include<ctype.h>
char doc[500000];
int main()
{
char ch;
int count=0,i,alphabet_count[2]={0},number=0,space=0,punct=0,alphabet[2000]={0};
while(1)
{
ch=getchar();
if(ch==EOF)break;
else
{
    doc[count]=ch;
    count=count+1;
}
}
for(i=0;i<count;i++)
{
if(islower(doc[i])!=0)
{
alphabet_count[1]++;
alphabet[doc[i]]++;
}
if(isupper(doc[i])!=0)
{
alphabet_count[0]=1+alphabet_count[0];
alphabet[doc[i]]=alphabet[doc[i]]+1;
}
if(isdigit(doc[i])!=0)
number=number+1;
if(isspace(doc[i])!=0)
space++;
if(ispunct(doc[i])!=0)
punct++;
}
printf("All Characters : %d\n",count++);
printf("Lowers : %d\nUppers : %d\nDigits : %d\nSpaces : %d\nPuncts : %d\n",alphabet_count[1],alphabet_count[0],number,space,punct);
for(i=65;i<=90;i++)
printf("%c : %d\n",i,alphabet[i]+alphabet[i+32]);
return 0;
}

/**************************************************************
	Problem: 1509
	User: 201601160202
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:1236 kb
****************************************************************/

