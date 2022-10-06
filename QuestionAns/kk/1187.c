#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nums[102];
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%s",nums);
        int len,sum=0;
        len=strlen(nums);
        for(int j=0;j<len;j++)
        {
            sum+=(nums[j]-48);
        }
        if(sum%3)
            printf("No\n");
        else
            printf("Yes\n");
    }
}

/**************************************************************
	Problem: 1187
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

