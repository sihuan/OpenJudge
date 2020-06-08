#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date {
int y;
int m;
int d;
};
struct date get_maxdate()
{
    int i,a,b,c;
    struct date mua;
    char s[20],s1[20]="000";
    while(gets(s)!=NULL)
    if(strcmp(s1,s)<0)
       strcpy(s1,s);
         a=(s1[0]-'0'+0)*1000+(s1[1]-'0'+0)*100+(s1[2]-'0'+0)*10+(s1[3]-'0'+0);
         mua.y=a;
         a=(s1[5]-'0'+0)*10+(s1[6]-'0'+0)*1;
         mua.m=a;
         a=(s1[8]-'0'+0)*10+(s1[9]-'0'+0)*1;
         mua.d=a;
  return mua;
}


int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

