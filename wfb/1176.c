#include <stdio.h>
#include <string.h>
int readA(int a[])
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
        scanf("%d",a+i);

    return n;
}

int printA(int a[],int n)
{
    int cnt=0;
    int i;
    int pre;
    for(i=0; i<n; ++i)
    {
        if(cnt++ == 0)
            printf("%d",a[i]);
        else
        {
            if(a[i] == pre)
                ;
            else
            {
                if(cnt++ != 1)
                    printf(" ");
                printf("%d",a[i]);
            }
        }
        pre = a[i];
    }
    putchar('\n');

    return 0;
}
int main()
{

    int n;
    scanf("%d",&n);
    int a[1005];
    int i;
    int x;
    for(i=0; i<n; ++i)
    {
        x = readA(a);
        printA(a,x);
    }
    return 0;
}

/**************************************************************
	Problem: 1176
	User: 201601011420
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

