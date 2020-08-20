#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test.txt","r",stdin);
    char ch[50],ans[50];
    gets(ans);
    int flag=5;
    while(scanf("%s",ch)!=EOF){
        if(flag){
            if(strcmp(ans,ch)==0){
                printf("Welcome!\n");
                return 0;
            }
            else if(strcmp(ans,ch)!=0){
                printf("Wrong!\n");
                --flag;
            }
        }
        else{
            printf("Out of limited!\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1093
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

