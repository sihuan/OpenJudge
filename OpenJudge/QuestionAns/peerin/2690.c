#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int youguan(int n){
if(n==7||n%7==0) return 1;
else{
    char buf[100]={0};
    sprintf(buf,"%d",n);
    int len = strlen(buf);
    for(int i = 0;i<len;++i){
        if(buf[i]=='7') return 1;
    }
    return 0;
}
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(!youguan(n))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

/**************************************************************
	Problem: 2690
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

