#include <stdio.h>
#include <string.h>
// 0<n<=10**1000
int evenp(char s[]){

int len = strlen(s);
char end_num = s[len-1]-'0';

if(end_num%2==0) return 1;
else return 0;

}

int main(){

char num[1001]={0};
while(scanf("%s",num)!=EOF){
    printf("%s\n",evenp(num)?"Even":"Odd");
}

return 0;
}

/**************************************************************
	Problem: 2036
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

