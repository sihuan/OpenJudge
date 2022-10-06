#include<stdio.h>
int zdg(int a,int b)
{
    int m,n,x;

    if(a>b)
    {
        m=a;
        n=b;
    }
    if(a==b)
        return a;
    if(a<b)
    {
        m=b;
        n=a;
    }
    while(m%n!=0)
    {
        x=m-n*(m/n);
        m=n;
        n=x;
    }
    return n;
}

int zxg(int a,int b,int m)
{
    int x,y,z;
    x=a/m;
    y=b/m;
    z=x*y*m;
    return z;
}
int main()
{
    int a,b,m,n;
    while(scanf("%d%d",&a,&b)!=EOF)
          {
              if((a!=0)&&(b!=0))
              {
                m=zdg(a,b);
                n=zxg(a,b,m);
                printf("%d %d\n",m,n);
              }
              else if(a==0)
                printf("%d %d\n",b,a);
              else if(b==0)
                printf("%d %d\n",a,b);

          }

}
/**************************************************************
	Problem: 1041
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

