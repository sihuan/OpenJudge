#include<stdio.h>
int main()
{
    int h,m,s,n;
    while(scanf("%d",&n) && n!=0){
        n--;
        h = n/3600;
        m = (n%3600)/60;
        s = (n%3600)%60;
        printf("%02d:%02d:%02d\n",h,m,s);
    }
}

/**************************************************************
	Problem: 1244
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

