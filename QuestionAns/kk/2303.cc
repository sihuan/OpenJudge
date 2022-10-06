#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
int main()
{
    int *nums;
    int *pr;
    nums=(int *)malloc(sizeof(int)*10000000);
    *nums=1;
    *(nums+1)=1;
    pr=(int *)malloc(sizeof(int)*666000);
    *(pr+1)=2;
    int i,j;
    for(i=2;i*i<10000000;i++)
        if(*(nums+i)==0)
            for(j=i*i;j<=10000000;j+=i)
                *(nums+j)=1;
    for(i=3,j=2;i<10000000;i+=2)
        if(*(nums+i)==0)
            {
                *(pr+j)=i;
                j++;
            }
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",*(pr+n));
    free(nums);
    free(pr);
}

/**************************************************************
	Problem: 2303
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4880 ms
	Memory:42468 kb
****************************************************************/

