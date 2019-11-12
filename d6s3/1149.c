#include<stdio.h>
#include<string.h>
int main(){
    int n,i,x;
    char s[1001];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++){
        gets(s);
        printf("case %d:length=%d.\n",i,strlen(s));
    }
}
/**************************************************************
	Problem: 1149
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

