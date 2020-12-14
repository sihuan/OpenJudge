#include <stdio.h>
#include <math.h>
#define MAX_STR_LEN 109

void print(int x,int n,int z)
{
    printf("   plate %d : from %d to %d\n",n,x,z);
}

void hanoi(int n,int x,int y,int z)
{
    if(n==1)
    {
        print(x,1,z);
    }
    else
    {
        hanoi(n-1,x,z,y);
        print(x,n,z);
        hanoi(n-1,y,x,z);
    }
}

int main()
{
    int n,x,y,z;
    int m=0;
    while(scanf("%d%d%d%d",&n,&x,&y,&z)!=EOF)
    {
        ++m;
        printf("case %d :\n",m);
        hanoi(n,x,y,z);
        printf("\n");
    }
}

/**************************************************************
	Problem: 1245
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

