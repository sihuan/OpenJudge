#include <stdio.h>
#include <string.h>
#define MAX_SIZE 15
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    char n1[MAX_SIZE],n2[MAX_SIZE];
    int l1,l2;
    int i,j;
    int cnt;
    int isPre;
    while(scanf("%s %s",n1,n2) != EOF)
    {
        isPre = 0;
        cnt = 0;
        for(i=strlen(n1)-1,j=strlen(n2)-1; i>=0&&j>=0; --i,--j)
        {
            if(n1[i] + n2[j] >= '1'+'9')
            {
                ++cnt;
                isPre = 1;
            }
            else if(isPre==1 && n1[i]+n2[j]=='0'+'9')
            {
                ++cnt;
            }
            else
            {
                isPre = 0;
            }
        }
        while(i>=0 && isPre==1 && n1[i]>='9')
        {
            ++cnt;
            --i;
        }
        while(j>=0 && isPre==1 && n2[j]>='9')
        {
            ++cnt;
            --j;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
/**************************************************************
	Problem: 1172
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

