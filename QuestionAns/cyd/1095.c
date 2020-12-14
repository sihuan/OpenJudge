#include<stdio.h>
int output(int n)
{    int i;
     if(n==1)return 1;
     if(n==2)return 2;
     if(n>2)
     {unsigned long long int a,b,c,z;
      a=1;b=2;
      for(i=3;i<=n;i++)
     {  c=a+b;
        a=b;b=c;
     }
     return c;
     }
}
int main()
{   int n,i;
     scanf("%d",&i);
    while(i--)
    {scanf("%d",&n);
    printf("%d\n",output(n));
    }
}

/**************************************************************
	Problem: 1095
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

