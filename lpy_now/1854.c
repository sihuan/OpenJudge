#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test data.txt","r",stdin);
    char ch[1100],ans[1100];
    int maxlen,len;
    gets(ch);
    len=strlen(ch);
    maxlen=len;
    strcpy(ans,ch);
    while(gets(ch)!=NULL){
        len=strlen(ch);
        if(len>maxlen){
            maxlen=len;
            strcpy(ans,ch);
        }
    }
    int i;
    for(i=0;i<maxlen;++i){
        if(ans[i]>='a' && ans[i]<='z'){
            ans[i]-=32;
        }
        putchar(ans[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1854
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

