#include <stdio.h>
#include <stdlib.h>
int jisuan(int n)
{
    int cnt=0,shang;
    shang=n;
    if(n==0)
        return 1;
while(shang!=0)
{
    cnt++;
    shang=shang/2;
}
return cnt;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=jisuan(n);
    printf("%d",m);
    return 0;
}

/**************************************************************
	Problem: 2299
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

