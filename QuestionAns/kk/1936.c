#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    memset(num,0,sizeof(num));
    int abst=0,inva=0;
    int i;
    while(scanf("%d",&i)!=EOF)
    {
        if((i>=1)&&(i<=n))
            num[i-1]++;
        else if(i==0)
            abst++;
        else
            inva++;
    }
    for(int j=0;j<n;j++)
        printf("Person %d : %d\n",j+1,num[j]);
    printf("Abstention : %d\n",abst);
    printf("Invalid ballots : %d\n",inva);
}

/**************************************************************
	Problem: 1936
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

