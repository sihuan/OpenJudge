#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k;
    char st[101];
    while(gets(st)){
        i=0,j=strlen(st)-1;
        while(isspace(st[i]))
            i++;
        while(isspace(st[j]))
            j--;
        k=i;
        while(k<=j){
            printf("%c",*(st+k));
            k++;
        }
        printf("\n");
        if((j-i==2)&&st[i]=='E'&&st[i+1]=='N'&&st[i+2]=='D')
            break;
    }
}
/**************************************************************
	Problem: 1094
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

