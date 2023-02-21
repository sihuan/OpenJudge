#include <stdio.h>
#include <string.h>
int main() {
    int q,i,t,m,n,x;
    int a[1001]= {0};
    int b[1001]= {0};
    scanf("%d",&n);
    for(q=1; q<=n; q++) {
        if(q%2!=0) //奇数赋值给A
            {
            scanf("%d",&t);
            for(i=0; i<t; i++) {
                scanf("%d",&a[i]);
            }
            if(q!=1) //在n！=1的第一次的时候奇数不会输出 因为后面讨论了q==n的情况 所以这里可以直接跳过q==1的情况
                {
                x=t>m?t:m;//直接比较两个数组的长度 用if（t>m）讨论的话会多一倍的代码 比较麻烦
                if(x==0) //长度为0的情况
                {
                    printf("\n");
                } 
                else 
                {
                    for(i=0; i<x; i++) {
                        if(i==0) 
                        {
                            printf("%d",a[i]+b[i]);//输出A B数组的和 感觉BC用了第三个数组麻烦 就没有用到第三个数组
                        } 
                        else 
                        {
                            printf(" %d",a[i]+b[i]);
                        }
 
                    }
                    printf("\n");
                    memset(b,0,sizeof(b));//清空每次B
                }
            }
            if(q==n) {//n==1时候特殊讨论第一次 n！=1特殊讨论最后一次
                for(i=0; i<t; i++) {
                    if(i==0) {
                        printf("%d",a[i]);
                    } else {
                        printf(" %d",a[i]);
                    }
                }
                printf("\n");
            }
        } 
        else //偶数赋值 同上 
            {
            scanf("%d",&m);
            for(i=0; i<m; i++) {
                scanf("%d",&b[i]);
            }
            x=t>m?t:m;
            if(x==0) 
            {
                printf("\n");
            } else {
                for(i=0; i<x; i++) {
                    if(i==0)
                    {
                        printf("%d",a[i]+b[i]);
                    } else
                    {
                        printf(" %d",a[i]+b[i]);
                    }
                }
                printf("\n");
                memset(a,0,sizeof(a));
            }
            if(q==n)
                {
                for(i=0; i<m; i++)
                {
                    if(i==0)
                    {
                        printf("%d",b[i]);
                    } else {
                        printf(" %d",b[i]);
                    }
                }
                printf("\n");
            }
        }
    }
}
/**************************************************************
	Problem: 1052
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

