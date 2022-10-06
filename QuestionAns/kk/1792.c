#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1-n;i<=n-1;i++)
    {
        for(j=n-1;j>=1-n;j--)
            {
                if((abs(j)+abs(i)<=n-1)&&i!=0&&j!=0)
                    printf("%d",abs(j)+abs(i));
                else if(j==0||i==0)
                    printf("%d",1);
                else
                    printf("%c",' ');
            }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1792
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

