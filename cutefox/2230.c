#include <stdio.h>
#include<stdlib.h>
int main()
{
    int mx,or=1,n;
    int i=2;
    scanf("%d",&mx);
    while(scanf("%d",&n)!=EOF)
    {
        if(n>mx)
        {
            mx=n;
            or=i;
        }
        i++;
    }
    printf("max = %d, order = %d.",mx,or);
}

/**************************************************************
	Problem: 2230
	User: 201901060203
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

