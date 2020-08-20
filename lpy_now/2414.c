#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //freopen("test.txt","r",stdin);
    char ch[110][110];
    int i=0;
    while(gets(ch[i])!=NULL){
        ++i;
    }
    while(i--){
        puts(ch[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 2414
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

