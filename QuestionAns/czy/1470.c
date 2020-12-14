#include <stdio.h>
#include <math.h>
#include "string.h"
#include <stdlib.h>

int a[39][39],ans[39];
int x[5] = {-1 ,1 ,0 ,0 ,0} ,y[5] = {0 ,0 ,-1 ,1 ,0} ;

void gauss(int n,int m)
{
        int max_r;
        int k=0,col=0;
        for(;k<n&&col<m;++k,++col)
        {
            max_r=k;
            int i=0;
            for(i=k+1;i<n;++i)
            {
                if(abs(a[max_r][col]) < abs(a[i][col]))
                max_r = i ;
            }
            if(!a[max_r][col])
            {
                --k;
                continue;
            }
            if(max_r!=k)
            {
                for(i=col;i<=m;++i)
                {
                    int temp;
                    temp=a[k][i];
                    a[k][i]=a[max_r][i];
                    a[max_r][i]=temp;
                }
            }
            for(i=k+1;i<n;++i)
            {
                if(a[i][col])
                {
                    int j;
                    for(j=col;j<=m;++j)
                     a[i][j] = a[i][j]^a[k][j] ;
                }
            }
             for( i = n-1 ; i >= 0 ; --i)
            {
            ans[i] = a[i][m] ;
            int j;
            for( j = i+1 ;j < m ; ++j)
            ans[i] = ans[i]^(a[i][j]&&ans[j]) ;
        }
        }
}

void input(int n ,int m){
    int i,j,k;
    for( i = 0 ;i < n ; ++i){
        for( j = 0 ;j < m ; ++j){
            int t = i*m + j ;
           scanf("%d" ,&a[t][n*m]) ;
            for( k = 0 ;k < 5 ; ++k){
                int sx = x[k] + i ;
                int sy = y[k] + j ;
                int st = sx*m + sy ;
                if(sx >= 0 && sx < n && sy >= 0 && sy < m){
                    a[t][st] = 1 ;
                }
            }
        }
    }
}

int main()
{
    int nn=0;
    int i=0,j=0,jj,kk;
    scanf("%d",&nn);
    for(j=0;j<nn;++j)
    {
        const int n=5,m=6;
        memset(a,0,sizeof(a));
        memset(ans,0,sizeof(ans));
        input(n,m);
        gauss(n*m,n*m);
        printf("PUZZLE #%d\n",j+1);
        for(jj=0;jj<30;++jj)
        {
            if((jj+1)%6 == 0){
                printf("%d\n" ,ans[jj]) ;
            }else printf("%d " ,ans[jj]) ;
        }
    }

    return 0;
}
/*可以把 5*6 的初始矩阵看成一个30 * 1的列向量（为了后面更好的列方程，所以看成列向量）Y(y1 ,y2 ,y3 ……y30) 。
然后把每一个开关也看成一个列向量C(k)（向量里总共30个值），那向量里的值是什么呢？如果第 k 个开关被按下影响了哪个灯就把相应位置为１，
否则置为０(例如：按第一个开关，１，２，７号灯会有影响，那么C(1) = {1 ,1 ,0 ,0 ,0 ,0 ,1 ,0,后面全为0}，其它的开关也这样，
那么要是全部的开关关掉，
就必须 Y(y1 ,y2……y30) + x1 * C(k1)  + x2 * C(k2) + x3 * C(k3) ……＋x30 * C(k30) = (0 ,0 ,0……0) （再次强调等式里的向量都是列向量）,
这里等式左边需要mod 2，其中等式中的 x1 ,x2 ……x30 为未知数，为0 或 1 ，1 代表操作了此按钮，０代表没操作，然
后我们把所有未知数看成一个列向量X(x1 ,x2 ,x3……x30)，C(k1) ,C(k2) ……C(k30)，也组成一个30*30 的矩阵 A(C(k1) ,C(k2) ,C(k3)……C(k30))
                （这里Y其实是一个对称向量，Y的转置等于Y）,这样等式就变成了 A*X = Y (mod 2) ,这样方程就列出来了。
　然后为什么有唯一解呢？我们可以发现 r(A) = 30，也就是说 A 可逆，因为r(A) = r(A ,Y) = 30 = n
                (注意 : 如果矩阵不是30 * 30 的这种形式的矩阵，则可能不是唯一解) ，所以方程一定有唯一解。好了下面就可以用高斯消元解方程了。
                （因为此矩阵 A 为对称矩阵那么代码中完全可以将向量C(k) 组成 A矩阵的时候看成行向量）。*/

/**************************************************************
	Problem: 1470
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

