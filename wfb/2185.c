#include <stdio.h>
#define max 10000000

int a[max];
int main()
{
    int m,n;
    int pos=-1;
    int cnt = 0;
    int isHave=0;
    scanf("%d%d",&n,&m);
    int i;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
        if(a[i] < m)
        {
            ++cnt;
        }
        else if(a[i] == m)
            isHave = 1;
    }
    if(isHave) pos=cnt+1;
    printf("%d",pos);

    return 0;
}

/**************************************************************
	Problem: 2185
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:39808 kb
****************************************************************/

