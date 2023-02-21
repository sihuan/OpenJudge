#include <stdio.h>
#include <ctype.h>
int abs(int n){
    return n>0?n:-n;
}

int main(){
int table[50]={2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999};
char s[20001]={0};
while(fgets(s,20000,stdin)!=NULL){
    char currentCh,lastCh=-10;
    int i;
    for(i = 0;s[i] != '\0'&&s[i] != '\n';i++){
        currentCh = s[i];
        if(currentCh==' '){
            printf("0");
            lastCh = currentCh;
            continue;
        }
        if(lastCh==-10){
            printf("%d",table[currentCh-'A']);
            lastCh=currentCh;
            continue;
        }

        if((table[lastCh-'A']%10)==(table[currentCh-'A']%10)){
            printf("1%d",table[currentCh-'A']);
            lastCh=currentCh;
            continue;
        }

        printf("%d",table[currentCh-'A']);
        lastCh=currentCh;
        continue;

    }
    printf("\n");
}
}
/**************************************************************
	Problem: 1490
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

