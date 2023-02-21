#include <stdio.h>
#include <string.h>

int main(){
char s[501];
double money = 1;
int total_n = 0;
//int total_len=0;
while(gets(s)!=NULL){
    //printf("%s\n",s);
    int len = strlen(s);
    //printf("len:%d\n",len);
    int n = len / 30;
    //printf("n:%d\n",n);
    int left = len % 30;
    //printf("left:%d\n",left);
    total_n += n;
    total_n += left==0?0:1;
    //printf("total_n:%d\n",total_n);
    //total_len+=len;
}
//int left = total_len%30;
//total_n = total_len / 30;
//if(left>0) total_n++;
//printf("%d\n",total_n);
//printf("total_n:%d\n",total_n);
money += total_n<=15?0:(total_n-15)*0.1;
printf("%.1lf\n",money);

return 0;
}

/**************************************************************
	Problem: 2300
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

