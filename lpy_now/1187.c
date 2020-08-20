#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test.txt","r",stdin);
    int m;
    scanf("%d",&m);
    char s[100];
    gets(s);
    int i;
    for(i=0;i<m;++i){
        char ch[150];
        gets(ch);
        int len=strlen(ch);
        int sum=0;
        int j;
        for(j=0;j<len;++j){
            sum+=(int)(ch[j]-'0');
        }
        if(sum%3==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

