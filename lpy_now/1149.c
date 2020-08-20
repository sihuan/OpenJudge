#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test.txt","r",stdin);
    int N;
    int i;
    char ch[2000];
    scanf("%d",&N);
    gets(ch);
    for(i=1;i<=N;++i){
        gets(ch);
        int l=strlen(ch);
        printf("case %d:length=%d.\n",i,l);
    }
    return 0;
}

/**************************************************************
	Problem: 1149
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

