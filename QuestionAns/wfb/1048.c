#include <stdio.h>
#include <string.h>
int N[105][105];
void ReadN(int n)
{
    int i,j;
    int pre_i,pre_j;
    int k;
    int end = n*n;
    for(k=1; k<=end; ++k)
    {
        if(k==1)
        {
            i=0;
            j=n/2;
        }
        else if(i==0 && j<n-1)
        {
            i=n-1;
            ++j;
            if(N[i][j] && pre_i<n-1)
            {
                i = pre_i+1;
                j = pre_j;
            }
        }
        else if(j==n-1 && i>0)
        {
            j=0;
            --i;
            if(N[i][j] && pre_i<n-1)
            {
                i = pre_i+1;
                j = pre_j;
            }
        }
        else if(i==0 && j==n-1)
        {
            ++i;
        }
        else
        {
            --i;
            ++j;
            if(N[i][j] && pre_i<n-1)
            {
                i = pre_i+1;
                j = pre_j;
            }
        }
        N[i][j] = k;
        pre_i = i;
        pre_j = j;
    }
}
void PrintN(int n)
{
    int i,j;
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(j) putchar(' ');
            printf("%d",N[i][j]);
        }
        putchar('\n');
    }
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        memset(N,0,sizeof(int)*105*105);
        ReadN(n);
        PrintN(n);
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1048
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:788 kb
****************************************************************/

