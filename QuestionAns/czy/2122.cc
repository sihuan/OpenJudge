/* 强老师因为去年差10分，无法参加比赛，悲痛欲绝。今年奋发图强，天天摸黑刷题，头发都掉了不少。于是今年参赛，杀出一条血路，比报名线高了200分，人称山科qls。他终于有机会去福州打比赛啦。因为听他队友说，福州妹子又多又好看，吃的又好又便宜。强老师来到现场赛，激动不已，强者如云，一共有p个人，但他上来就A了个五子棋，排在了第三名，但是现场赛需要打很久，排名会不断更新，强老师也会不断A题，于是现场榜变幻莫测。
      假设整场比赛的时间为1到n，强老师的初始排名为a，强老师每t时间就会掉1名、
2名、3名……以此类推，（比如第一分钟掉1名，则第二分钟掉2名，则一共掉了3名）但是强老师每m分钟会上涨k名，这时排名又会重新计算
即从此时起，强老师重新会掉1名、2名、3名……
问强老师在n时间的最终排名。
Input

输入分别为，比赛人数p，比赛终止时间n，强老师的初始排名a，每t时间跌落排名，每m时间
上涨排名及上涨名次k。输入以0 0 0 0 0 0结 束
(1 <= p , n , a , t , m , k<= 100000)
Output

输出强老师的最终排名，每个结果间有一个换行。
Sample Input

38907 20000 2593  29 1895  424
0 0 0 0 0 0
Sample Output

20667
HINT

重新计算的意思是之前递增的排名归1，不再是之前累计所要掉的排名了

强老师在涨排名的同时若又到了掉排名的时间则不计算掉排名。

每t时间的意思是，若从第1s开始算起，则第t秒会掉排名*/

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

int main()
{
    int p,n,a,t,m,k;
    while(scanf("%d%d%d%d%d%d",&p,&n,&a,&t,&m,&k)) //比赛人数p，比赛终止时间n，强老师的初始排名a，每t时间跌落排名，每m时间
    {
        if(p==0 && n==0 && a==0 && t==0 && m==0 && k==0) break;
        int step = 1;
        int i = 1;
        int ans = a;
        for(i = 1; i <= n; i ++)
        {
            if(i % m == 0)
            {
                step = 1;
                ans -= k;
                if(ans <= 0)
                    ans = 1;
            }
            else if(i % t == 0)
            {
                ans += step;
                step++;
                if(ans > p)
                    ans = p;
            }
        }
        printf("%d\n",ans);
    }
}

//掉排名是第一次一名，第二次两名，以此类推，不是一个一个的掉。
//上升排名是减，下降排名是加
//时间可以用循环来做

/**************************************************************
	Problem: 2122
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

