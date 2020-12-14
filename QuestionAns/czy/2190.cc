#include<iostream>
#include<stdio.h>

using namespace std;

void Adjust(long *a,long i,long n)//µ÷Õû
{
    long lchild=2*i+1;
    long rchild=2*i+2;
    long min=i;
    if(i<=n/2)
    {
        if(lchild<=n-1 && a[lchild]<a[min] ) min=lchild;
        if(rchild<=n-1 && a[rchild]<a[min] ) min=rchild;
        if(min!=i) {swap(a[min],a[i]);
        //Adjust(a,min,n);
        }
    }
}
void Sort(long *a,long n)
{
    for(long i=n/2-1;i>=0;--i)//³õ½¨¶Ñ
    {
        Adjust(a,i,n);
    }
    //for (long k=n-1;k>0;--k)
    {
        swap(a[0],a[n-1]);
       // Adjust(a,0,k);
    }
}
int main()
{
    long n;
    long sum=0;
    scanf("%ld",&n);
    long a[n];
    for (long i=0;i<n;++i)
    {
        scanf("%ld",&a[i]);
    }
    //Sort(a,n);
    while(n>1)
    {
        Sort(a,n);
        long first=a[n-1];
        --n;
        Sort(a,n);
        long second=a[n-1];
        --n;
        sum=sum+first+second;
        //rintf("%d",sum);
        ++n;
        a[n-1]=first+second;
    //Sort(a,n);
    }
    printf("%ld",sum);
    return 0;
}

/**************************************************************
	Problem: 2190
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:812 ms
	Memory:1268 kb
****************************************************************/

