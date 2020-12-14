#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test data.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int i;
        char ch[1100];
        getchar();
        for(i=0;i<n;++i){
            gets(ch);
            putchar(ch[0]);
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1653
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

