#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    char a[100],b[100];
    gets(a);
    gets(b);
    int c,d;
    c=strlen(a),d=strlen(b);
    if(c>d){
        puts(a);
        printf("%s",b);
    }
    else{
        puts(b);
        printf("%s",a);
    }
    return 0;
}

/**************************************************************
	Problem: 1017
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

