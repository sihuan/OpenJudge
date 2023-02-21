#include <stdio.h>


int main(){

int T;
scanf("%d",&T);
getchar();
int i;
for(i = 0;i<T;++i){
    int N;
    char ans[100];
    scanf("%d",&N);
    getchar();
    int j;
    for(j = 0;j<N;++j){
        char s[1000];
        gets(s);
        ans[j]=s[0];
        //printf("%s\n",s);
    }
    ans[N] = '\0';
    printf("%s\n",ans);
}


return 0;
}

/**************************************************************
	Problem: 1653
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

