#include <stdio.h>

double num[51][11];
void printHead(int n)
{
    char temp[15];
    getchar();
    int i;
    for(i=0; i<n+1; ++i)
    {
        scanf("%s",temp);
        if(!i)
            printf("%-8s",temp);
        else
            printf("%7s",temp);
    }
    printf("%7s","sum");
    putchar('\n');
}
void ReadRow(int row,int n)
{
    char temp[15];
    getchar();
    scanf("%s",temp);
    printf("%-8s",temp);
    int i;
    double cnt=0;
    for(i=0; i<n; ++i)
    {
        scanf("%lf",&num[row][i]);
        printf("%7.1lf",num[row][i]);
        cnt += num[row][i];
    }
    printf("%7.1lf\n",cnt);
}
void ReadMatrix(int m,int n)
{
    int i;
    for(i=0; i<m; ++i)
    {
        ReadRow(i,n);
    }
}
void getAver(int m,int n)
{
    double sum;
    int i,j;
    for(i=0; i<n; ++i)
    {
        sum = 0;
        for(j=0; j<m; ++j)
        {
            sum += num[j][i];
        }
        num[50][i] = sum/m;
    }
}
void PrintAver(int n)
{
    int i;
    printf("average ");
    for(i=0; i<n; ++i)
    {
        printf("%7.1lf",num[50][i]);
    }
    putchar('\n');
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int m,n;
    scanf("%d%d",&m,&n);
    printHead(n);
    ReadMatrix(m,n);
    getAver(m,n);
    PrintAver(n);
    return 0;
}

/**************************************************************
	Problem: 1254
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

