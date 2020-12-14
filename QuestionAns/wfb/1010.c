#include<stdio.h>

int main()
{
	int y;
	scanf("%d",&y);
	if(y%4 == 0 && y%100 != 0 ||y%400 == 0) 
        printf("Yes\n");
    else printf("No\n");
	

	return 0;
}

/**************************************************************
	Problem: 1010
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

