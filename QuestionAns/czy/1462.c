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
 int flag=1;

int findlqw(int *a,int temp,int n)
{
    int i=0;
    flag=1;
    int x=0;
    for(i=1;i<=n;++i)
    {
        if(temp==a[i])
        {
            x=1;
           if(flag==1)
            {
                printf("%d",i);
                flag=0;
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
    if(x==1) printf("\n");
    if(x==0) return 0;
}

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
            if(findlqw(a,temp,n)==0)
            {
                printf("NOT FOUND\n");
            }
        }
    return 0;
}

/**************************************************************
	Problem: 1462
	User: 201601160202
	Language: C
	Result: Accepted
	Time:52 ms
	Memory:1068 kb
****************************************************************/

