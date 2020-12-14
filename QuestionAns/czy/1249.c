#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1009

void init_seq(int *odd_seq,int MAX_SIZE2)
{
    int i=0;
    for(i=0;i<MAX_SIZE2;++i)
    {
        odd_seq[i]=0;
    }
}

int get_seq(int *odd_seq)
{
    int n=0;
    int i=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&odd_seq[i]);
    }
    return n;
}

int max(int odd_size,int even_size)
{
    if(odd_size>even_size) return odd_size;
    else return even_size;
}

int add_seq(int *odd_seq,int *even_seq,int put_size)
{
    int i=0;
    for(i=0;i<put_size;++i)
    {
        odd_seq[i]=odd_seq[i]+even_seq[i];
    }
    return 0;
}

void put_seq(int *odd_seq,int put_size)
{
    int i=0,flag=0;
    for(i=0;i<put_size;++i)
    {
        if(flag==0) printf("%d",odd_seq[i]);
        else printf(" %d",odd_seq[i]);
        flag=1;
    }
    printf("\n");
}

int main()
{
    int  odd_seq[MAX_SIZE],  odd_size;
    int even_seq[MAX_SIZE], even_size;
    int m, i, put_size;

    scanf("%d", &m);
    init_seq(odd_seq, MAX_SIZE);
    odd_size = get_seq(odd_seq);
    for(i = 2; i <= m; i++)
    {
        if(i % 2 == 0)
        {
            init_seq(even_seq, MAX_SIZE);
            even_size = get_seq(even_seq);
            put_size = max(odd_size, even_size);
            add_seq(odd_seq, even_seq, put_size);
            put_seq(odd_seq, put_size);
        }
        else
        {
            init_seq(odd_seq, MAX_SIZE);
            odd_size = get_seq(odd_seq);
            put_size = max(odd_size, even_size);
            add_seq(even_seq, odd_seq, put_size);
            put_seq(even_seq, put_size);
        }
    }
    if(m % 2 == 0)
        put_seq(even_seq, even_size);
    else
        put_seq(odd_seq, odd_size);
    return 0;
}
/**************************************************************
	Problem: 1249
	User: 201601160202
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

