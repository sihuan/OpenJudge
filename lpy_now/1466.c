#include<stdio.h>

void recursive(){
    char ch=getchar();
    if(ch!=EOF){
        recursive();
        putchar(ch);
    }
}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2208 kb
****************************************************************/

