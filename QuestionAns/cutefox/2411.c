#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int judge(char c)
{
    if(c>='A'&&c<='Z')
        c=c+'a'-'A';
switch(c)
{
case 'a':
    return 1;
case 'b':
    return 2;
case 'c':
    return 3;
case 'd':
    return 4;
case 'e':
    return 5;
case 'f':
    return 6;
case 'g':
    return 7;
case 'h':
    return 8;
case 'i':
    return 9;
case 'j':
    return 10;
case 'k':
    return 11;
case 'l':
    return 12;
case 'm':
    return 13;
case 'n':
    return 14;
case 'o':
    return 15;
case 'p':
    return 16;
case 'q':
    return 17;
case 'r':
    return 18;
case 's':
    return 19;
case 't':
    return 20;
case 'u':
    return 21;
case 'v':
    return 22;
case 'w':
    return 23;
case 'x':
    return 24;
    case 'y':
    return 25;
    case 'z':
    return 26;
}
}
int main()
{
    int i,len,m;
    char a[1000];
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        m=judge(a[i]);
        printf("%d\n",m);
    }
    return 0;
}

/**************************************************************
	Problem: 2411
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

