#include <stdio.h>
int num[200000];
int ans[200000];
int ReadNum()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&num[i]);
    }
    return n;
}
int Avery(int n)
{
    int i;
    int cnt=0;
    for(i=0; i<n; ++i)
    {
        cnt+=num[i];
    }
    if(cnt%n==0) return cnt/n;
    else return 0;
}
int getAns(int avery,int n)
{
    if(avery==0) return 0;
    int i;
    int cnt=0;
    for(i=0; i<n; ++i)
    {
        if(num[i] == avery)
        {
            ans[cnt++] = i+1;
        }
    }
    return cnt;
}
void printAns(int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        if(i) putchar(' ');
        printf("%d",ans[i]);
    }
    putchar('\n');
}
int main()
{
    int n,m;
    scanf("%d",&n);
    int i;
    int avery;
    int cnt;
    for(i=0; i<n; ++i)
    {
        m = ReadNum();
        avery = Avery(m);
        cnt = getAns(avery,m);
        printf("%d\n",cnt);
        if(cnt) printAns(cnt);
    }
    return 0;
}

/**************************************************************
	Problem: 1080
	User: 201601011420
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:2308 kb
****************************************************************/

