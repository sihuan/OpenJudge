#include<ctype.h>
#include<stdio.h>
#include<string.h>

char a;

int main(){
    //freopen("test.txt","r",stdin);
    int f,l=0,i,zmlow=0,zmup=0,num=0,space=0,pun=0;
    int b[92]={0};
    while((a=getchar())!=EOF){
        ++l;
        if(islower(a)){
            ++zmlow,++b[a-96];
        }
        else if(isupper(a)){
            ++zmup,++b[a-64];
        }
        else if(isdigit(a)){
        	++num;
		} 
        else if(isspace(a)){
        	++space;
		} 
        else if(ispunct(a)){
        	++pun;
		} 
    }
    printf("All Characters : %d\n",l);
    printf("Lowers : %d\n",zmlow);
    printf("Uppers : %d\nDigits : %d\nSpaces : %d\nPuncts : %d\n",zmup,num,space,pun);
    for(i=1;i<27;++i){
        printf("%c : %d\n",i+64,b[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1509
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

