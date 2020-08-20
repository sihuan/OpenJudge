#include<stdio.h>
#include<string.h>

int main(){
    char ch[15];
    scanf("%s",ch);
    int l=strlen(ch)-1;
    int n;
    scanf("%d",&n);
    if(n-1>l){
        printf("error");
        return 0;
    }
    else{
        putchar(ch[n-1]);
    }
    return 0;
}

/**************************************************************
	Problem: 1253
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

