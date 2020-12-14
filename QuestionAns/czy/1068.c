#include<stdio.h>
#include"string.h"
int a[8];
int x;
int f(int n)
{
    int m=0;
    while(1)
    {
      if(n/10==0)
      {
          a[m]=n;
          ++m;
          break;
      }
      else
      {
          a[m]=n%10;
          n=n/10;
          ++m;
      }
    }
    return m;
}

int g(int m)
{
    int i,j,k;
    for(i=x-1; i>=0; --i)
    {
        if(a[i]==1 || a[i]==4)
        {

            printf(" ");
            for(j=0; j<m; ++j) printf(" ");
            printf(" ");
        }
        else
        {
            printf(" ");
            for(j=0; j<m; ++j) printf("-");
            printf(" ");
        }
         if(i>0) printf(" ");
    }
    puts("");
}


int g2(int m)
{
    int i,j,k;
    for(i=x-1;i>=0;--i)
    {
        if(a[i]==1 || a[i]==7 || a[i]==0)
        {

            printf(" ");
            for(j=0; j<m; ++j) printf(" ");
            printf(" ");
        }
        else
        {
            printf(" ");
            for(j=0; j<m; ++j) printf("-");
            printf(" ");
        }
        if(i>0) printf(" ");
    }
    puts("");
}

int g3(int m)
{
    int i,j,k;
    for(i=x-1;i>=0;--i)
    {
        if(a[i]==1 || a[i]==7 || a[i]==4)
        {

            printf(" ");
            for(j=0; j<m; ++j) printf(" ");
            printf(" ");
        }
        else
        {
            printf(" ");
            for(j=0; j<m; ++j) printf("-");
            printf(" ");
        }
        if(i>0) printf(" ");
    }
    puts("");
}

int g4(int m)
{
    int i,j,k;
    for(i=0;i<m;++i)
    {
        for(j=x-1;j>=0;--j)
        {
            if(a[j]==1 || a[j]==2 || a[j]==3 || a[j]==7)
            {
                printf(" ");
                for(k=0; k<m; ++k) printf(" ");
                printf("|");

            }
            else if(a[j]==5 || a[j]==6)
            {
                printf("|");
                for(k=0; k<m; ++k) printf(" ");
                printf(" ");
            }
            else
            {
                printf("|");
                for(k=0; k<m; ++k) printf(" ");
                printf("|");
            }
             if(j>0) printf(" ");
        }

        puts("");
    }
}
int g5(int m)
{
    int i=0,j,k;
    for(i=0;i<m;++i)
    {
        for(j=x-1;j>=0;--j)
        {
            if(a[j]==1 || a[j]==4 || a[j]==3 ||a[j]==5 || a[j]==7 || a[j]==9)
            {
                printf(" ");
                for(k=0; k<m; ++k) printf(" ");
                printf("|");

            }
            else if(a[j]==2)
            {
                printf("|");
                for(k=0; k<m; ++k) printf(" ");
                printf(" ");
            }
            else
            {
                printf("|");
                for(k=0; k<m; ++k) printf(" ");
                printf("|");
            }
            if(j>0) printf(" ");
        }

        puts("");
    }
}

int main()
{
    int n,m;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0 && m==0) return 0;
         x=f(m);
        //printf("%d",x);
        int i,j,k;
        for(i=1;i<=5;++i)
        {
            if(i==1) g(n);
            else if(i==3) g2(n);
            else if(i==5) g3(n);
            else if(i==2) g4(n);
            else g5(n);

        }
        puts("");
    }
}

/**************************************************************
	Problem: 1068
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

