#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char nub[32];
    unsigned sum;
    int len,i,j;
    while(scanf("%s",&nub)!=EOF)
    {
        sum=0;
        len=strlen(nub);
        for(i=0;i<len;i++)
        {
            sum*=2;
            if(nub[i]=='1')
                sum+=1;
        }
        printf("%u\n",sum);
    }
}

/**************************************************************
	Problem: 1242
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

