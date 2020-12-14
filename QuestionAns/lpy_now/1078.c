#include<stdio.h>
#include<string.h>

int main(){
    char name[110][25];
    int n,m;
    int answer[110][25];
    int Q[110];
    memset(answer,0,sizeof(answer));
    int name_max_len=0;
    scanf("%d%d",&n,&m);
    int i,j,k;
    for(i=1;i<=n;++i){
        scanf("%s",name[i]);
        int len=strlen(name[i]);
        if(len>name_max_len){
            name_max_len=len;
        }
        for(j=1;j<=m;++j){
            getchar();
            char ch=getchar();
            answer[i][j]=ch-'A';
        }
        scanf("%d",&Q[i]);
    }
    for(i=1;i<=n;++i){
        int flag=1,cnt=0;
        if(i!=1){
            printf("\n");
        }
        printf("%s",name[i]);
        for(j=1;j<=name_max_len-strlen(name[i]);++j){
            printf(" ");
        }
        printf(":");
        for(j=1;j<=n;++j){
            if(j==i){
                continue;
            }
            cnt=0;
            for(k=1;k<=m;++k){
                if(answer[i][k]==answer[j][k]){
                    ++cnt;
                }
            }
            if(cnt>=Q[i]){
                if(flag==1){
                    flag=0;
                }
                else{
                    printf(",");
                }
                printf("%s",name[j]);
            }
        }
        if(flag==1){
            printf("NONE!");
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1078
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

