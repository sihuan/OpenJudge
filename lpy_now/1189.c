#include<stdio.h>
#define MAX_STR_LEN 1500

int str_len(char ch[]){
	int cnt=0;
	while(1){
		if(ch[cnt]!='\0'){
			++cnt;
		} 
		else{
			return cnt;
		}
	} 
}

int main()
{
    int n;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", str_len(s));
    return 0;
}

/**************************************************************
	Problem: 1189
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

