#include<stdio.h>
#include<string.h>

int main(){

char s[11];
scanf("%s",s);
int k;
scanf("%d",&k);

int len = strlen(s);
if(k>len) printf("error\n");
else printf("%c\n",s[k-1]);

return 0;
}



/**************************************************************
	Problem: 1253
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

