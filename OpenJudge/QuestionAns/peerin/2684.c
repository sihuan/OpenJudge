#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odd_s=0,even_s=0;
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n%2==0) even_s+=n;
        else odd_s+=n;
    }
    printf("%d %d",odd_s,even_s);
    return 0;
}

/**************************************************************
	Problem: 2684
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

