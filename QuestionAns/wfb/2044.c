#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1005
#define MAX_LENGTH 105

int main()
{
    int temp,n;
    int ans = 0;
    scanf("%d",&temp);
    while(scanf("%d",&n) != EOF)
    {
        ans += n;
    }
    if(ans < 0) printf("Yes\n");
    else printf("No\n");

    return 0;
}

/**************************************************************
	Problem: 2044
	User: 201601011420
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

