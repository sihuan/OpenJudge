#include<stdio.h>
#include<math.h>
void output(int m,int n)
{
        int i,z,x,a[510000]={0},flag=1;
      for(x=m;x<=n;x++)
      {
          a[x]=x;//给数组赋值
      }
     for(i=2;i<=sqrt(n);i++)
    {
           for(z=m;z<=n;z++)
       if(a[z]!=i)
       {
           if(z%i==0)
        {
           a[z]=0;//将不是素数的转化为零
        }
       }
       }
    for(i=m;i<=n;i++)//输出不是零的数组数
     {
         if(a[i]!=0&&a[i]!=1)
         {
           printf("%d\n",a[i]);flag=2;
         }

     }
   if(flag==1) printf("\n");
}
 int main()
 {   int m,n,count=1;
     while(scanf("%d %d",&m,&n)!=EOF)
      { if(count!=1)printf("\n");count=2;
       output(m, n);
       }

return 0;



 }

/**************************************************************
	Problem: 1179
	User: 201901061304
	Language: C
	Result: Accepted
	Time:384 ms
	Memory:2676 kb
****************************************************************/

