#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test.txt","r",stdin);
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;++i){
        char ch[10];
        scanf("%s",ch);
        int score;
        scanf("%d",&score);
        printf("%8s |",ch);
        int j;
        for(j=1;j<=score;++j){
            printf("=");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1246
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

