#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int isBYear(int n)
{
    char table[10] = {0};
    int x;
    while(n)
    {
        x = n%10;
        if(table[x] == 0)
            table[x] = 1;
        else
            return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    while(scanf("%d",&n) != EOF)
    {
        do
        {
           ++n;
        }while(isBYear(n) == 0);
        printf("%d\n",n);
    }
	return 0;
}

/**************************************************************
	Problem: 1297
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

