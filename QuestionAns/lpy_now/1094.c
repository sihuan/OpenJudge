#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    //freopen("test.txt","r",stdin);
    int i,n,j;
    char c[105],a[105],b[105];
    while(gets(c)){
        j=0;
        n=strlen(c);
        for(i=n-1;isspace(c[i]);--i);{
            c[i+1]='\0';
        }
        for(i=0;isspace(c[i]);++i);{
            printf("%s\n",&c[i]);
        }
        if(strcmp(&c[i],"END")==0){
            return 0;
        }
    }
    return 0;
}


/**************************************************************
	Problem: 1094
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

