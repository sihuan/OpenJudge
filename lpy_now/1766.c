#include<stdio.h>
#include<string.h>

void deal(char ch[]){
    int l=strlen(ch);
    int i;
    for(i=0;i<l;++i){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]+=32;
        }
    }
}
int main(){
    char key[50],s[50];
    scanf("%s",key);
    deal(key);
    int n=0;
    while(scanf("%s",s)!=EOF){
        ++n;
        deal(s);
        if(n>5){
            printf("Out of limited!\n");
        }
        else{
            if(strcmp(s,key)==0){
                printf("Welcome!\n");
                return 0;
            }
            else{
                
                printf("Wrong!\n");
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1766
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

