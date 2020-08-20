#include<stdio.h>
#include<string.h>

int main(){
    char ch[1500];
    while(gets(ch)!=NULL){
        int l=strlen(ch);
        int n=ch[l-1]-'0';
        if(n%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2036
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

