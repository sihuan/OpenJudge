#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //freopen("test.txt","r",stdin);
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch>='A' && ch<='Z'){
            printf("%d\n",ch-'A'+1);
        }
        else if(ch>='a' && ch<='z'){
            printf("%d\n",ch-'a'+1);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 2411
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

