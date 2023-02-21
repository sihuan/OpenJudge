#include <stdio.h>

int main(){
unsigned int a;
scanf("%u",&a);
printf("%dK\n%.2fM\n%.2fG",a/1024,a/(1024.0*1024.0),a/(1024.0*1024.0*1024.0));
return 0;
}

/**************************************************************
	Problem: 2040
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

