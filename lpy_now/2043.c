#include<stdio.h>
#include<string.h>

char ch[1100][110];

int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;++i){
        scanf("%s",ch[i]);
    }
    char cha[110];
    while(scanf("%s",cha)!=EOF){
        for(i=0;i<n;++i){
            if(!strcmp(ch[i],cha)){
                printf("Yes\n");
                break;
            }
            if(i==n-1){
                printf("No\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2043
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:864 kb
****************************************************************/

