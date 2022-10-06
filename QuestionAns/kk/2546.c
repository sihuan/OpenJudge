#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int input(int a[])
{
    int len=0;
    while(scanf("%d",&a[len])!=EOF)
        len++;
    return len;
}
int del(int a[], int n)
{
    int ant[n];
    int i,j=0;
    for(i=0;i<n;i++)
        if(a[i]%2!=0)
        {
            ant[j]=a[i];
            j++;
        }
    for(i=0;i<j;i++)
        a[i]=ant[i];
    return j;
}
int main()
{
    int data[10000], i, cnt;
    cnt=input(data);
    cnt=del(data,cnt);
    if (cnt>0){
        printf("%d",data[0]);
        for(i=1;i<cnt;i++)
            printf(" %d",data[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 2546
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

