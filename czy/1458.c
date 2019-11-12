#include <stdio.h>
#include <string.h>

//int findinsert(int *a,int temp,int m)
//{
//    int i;
//    for(i=1;i<m;++i)
//    {
//        if(temp==a[i]) return 1;
//    }
//    return 0;
//}
//
//void findloc(int temp,int m,int *a)
//{
//     int i;
//    for(i=1;i<m;++i)
//    {
//        if(temp==a[i])
//        {
//            printf("%d\n",i);
//            return;
//        }
//    }
//    printf("0\n");
//}

int main()
{
    int h=0,m=1,s=0,sum=0,temp=0;
    int n=0,i;
    scanf("%d",&n);
    int a[100000];
    memset(a,0,sizeof(a));
    for(i=1;i<=n;++i)
    {
        scanf("%d",&temp);
            a[i]=temp;
    }
    while(scanf("%d",&temp)!=EOF)
        {
            if(temp>n)
            {
                printf("OUT OF RANGE\n");
                continue;
            }
            printf("%d\n",a[temp]);
        }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:1064 kb
****************************************************************/

