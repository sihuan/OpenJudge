#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b = a % 4;
    c = a % 100;
    d = a %400;
    if(b == 0){
    if(c != 0){printf("Yes");}
    else{
        if(d == 0){printf("Yes");}
    else{printf("No");}}}
    else{
   printf("No");
   }
return 0;
}
/**************************************************************
	Problem: 1010
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

