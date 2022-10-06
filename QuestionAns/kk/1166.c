#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,s=1;
    scanf("%d",&n);
    while(s<=n)
    {
        scanf("%d",&m);
        if(m>0)
            {
                for(i=1;i<=m;i++)
                {
                    for(j=1;j<=m-i;j++)
                        printf("%c",' ');
                    for(j=1;j<=2*i-1;j++)
                        printf("%d",i%10);
                    printf("\n");

                }
            }
        else if(m<0)
        {
           m=abs(m);
           for(i=m;i>=1;i--)
                {
                    for(j=1;j<=m-i;j++)
                        printf("%c",' ');
                    for(j=1;j<=2*i-1;j++)
                        printf("%d",i%10);
                    printf("\n");
                }
        }
        printf("\n");
        s++;
    }

}

/**************************************************************
	Problem: 1166
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

