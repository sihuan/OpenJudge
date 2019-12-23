#include<stdio.h>

int main()
{
    int year,bj,rs,i;
    char xy,zy;
    scanf("%d %c %c %d %d",&year,&xy,&zy,&bj,&rs);
    for(i=1;i<=rs;i++)
        printf("%04d%02d%02d%02d%02d\n",year,xy-64,zy-64,bj,i);
}

/**************************************************************
	Problem: 1425
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

