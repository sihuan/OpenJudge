#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nums[6];
    while(scanf("%s",nums)!=EOF)
    {
        int fl=1;
        for(int i=4; i>=0; i--)
            if(!isalpha(nums[i]))
            {
                nums[4]=nums[i];
                fl=0;
                break;
           }
        if(fl==1)
            nums[4]=48;
        nums[4]-=48;
        int flag;
        flag=nums[4]%5;
        if(flag==0)
            flag+=5;
        for(int i=1; i<=6; i++)
        {
            if(i!=flag)
                printf("%d ",i);
        }
        printf("7\n");
    }
}

/**************************************************************
	Problem: 2301
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

