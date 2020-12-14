/*马姐姐最近打区域赛老是吃屎，没有给孩子们做好榜样，于是她决定报复社会，用她自己的方式。   但是出题是一个技术活，不能太难还不能太简单，她决定从一些基础入手。
题目要求首先输入一个数T，代表样例组数。
再输入一个数n，代表接下来要输入n行指令。
对于每一行指令，有5种形式，先输入一个数x。
1、如果x是1，则输入一个非负数A，A的范围在十亿以内（包括十亿），并把它用拼音的形式打出来，形式见下文
2、如果x是2，则输入一个字符c，字符c只会是大小写字母，输出它的ascii码值的拼音值，如上。
3、如果x是3，则输出"are you eating bull shit!!!?"（没有引号）
4、如果x是4，则把你刚最后一次输入的数A输出一遍,如果没有则输出 -1
5、如果x是5，则输出三行
    while true:
        "end-less loop of yxm's rock!";
    end while
每行指令结束之后加一个换行
Input

Output

Sample Input

1
5
1 12
2 f
3
4
5
Sample Output

yi er
yi ling er
are you eating bull shit!!!?
12
while true:
    "end-less loop of yxm's rock!";
end while
HINT*/

#include <iostream>
#include <stdio.h>
#include <cstring>
#include<algorithm>
#include <string.h>
#define mod  1000000007
#define INF  0x3f3f3f3f
#define Fuck() cout << "MMP" << endl
using namespace std;

bool cmp(const int &a,const int &b )
{
    return a>b;
}

const int max_n=100005;

bool flag=true;

const int T=10;
/*
char a[10]="ling";
char b[10]="yi";
char c[10]="er";
char d[10]="san";
char e[10]="si";
char f[10]="wu";
char g[10]="liu";
char h[10]="qi";
char i[10]="ba";
*/

char a[T][T]={{"ling"},{"yi"},{"er"},{"san"},{"si"},{"wu"},{"liu"},{"qi"},{"ba"},{"jiu"}};
//int n=0;
int h[15];
/*
int fun(int i)
{
    if(i/10==0)
    {
      //  printf("%d",i%10);
      //  sum=sum+i%10;
      h[n]=i%10;
        n++;
        return 0;
    }
    else
    {
       // printf("%d",i%10);
   // sum=sum+i%10;
        fun(i/10);
        h[n]=i%10;
        n++;
        return 0;
    }
}
*/

long fun(long qw,long n)
{
    while(qw/10!=0)
    {
        h[n]=qw%10;
        n++;
        qw=qw/10;
    }
    h[n]=qw%10;
        return n;
        }


int main()
{

    //printf("%s",a[0]);
    //freopen("data.txt","r",stdin);
    long kl=0;
    long n=0;
    long m=0;
    long  A=-1;
    scanf("%ld",&kl);
    for(long i=1;i<=kl;++i)
    {
       A=-1;
        scanf("%ld",&m);
        for(long j=1;j<=m;++j)
        {                              //ÕýÆ¬¿ªÊ¼
            long k=0;
            scanf("%ld",&k);
            if (k==1)
            {
                scanf("%ld",&A);
         //       n=0;
            n=   fun(A,0);
                printf("%s",a[h[n]]);
          //    printf("%d",n);
                for(long v=n-1;v>=0;--v)
                {
                    printf(" %s",a[h[v]]);
                }
                printf("\n");
            }
              else if(k==2)
              {
                  char c;
                  scanf(" %c",&c);
                  int cc=(long)c;
                  n=0;
             n=     fun(cc,0);
           printf("%s",a[h[n]]);
          //      printf("%d",n);
                for(long v=n-1;v>=0;--v)
                {
                    printf(" %s",a[h[v]]);
                }
                 printf("\n");
              }
              else if(k==3)
              {
                  printf("are you eating bull shit!!!\?\n");
              }
            else if(k==4)
            {
                printf("%ld\n",A);
            }
            else if(k==5)
            {
                printf("while true:\n    \"end-less loop of yxm's rock!\";\nend while\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2125
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

