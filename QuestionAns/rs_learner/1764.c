#include<stdio.h>
int sum(int k)
{
    int he,point;
    scanf("%d",&point);
    if(k>=2)
        he=sum(k-1)+point;
    else
        he=point;
    return he;
}
int main()
{
    int he,k;
    scanf("%d",&k);
    he=sum(k);
    printf("%d",he);
    return 0;
}
/**************************************************************
	Problem: 1764
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

