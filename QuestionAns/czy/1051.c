#include<stdio.h>
#include <math.h>
#define MAX_SIZE 1009

int main()
{
    int n=0,k=0;
    int kl=0,j=0,jk=0,i=0,m;
    int a[1009],b[1009];
    int a1=0,b2=0;
    scanf("%d",&m);
    for(k=1;k<=m;++k)
    {
        n=0;
       if(k%2!=0)
       {
           int temp;
          while (scanf("%d",&temp)!=EOF)
          {
              if(temp==0) break;
              a[n]=temp;
              ++n;
          }

        a1=n;
         continue;
       }
       else
       {
           int temp;
          while (scanf("%d",&temp)!=EOF)
          {
              if(temp==0) break;
              b[n]=temp;
              ++n;
          }
           b2=n;
           if(a1>=b2)
            {
                for(kl=0;kl<b2;++kl)
                {
                    a[kl]=a[kl]+b[kl];
                }
            }
            else if(a1<b2)
            {
                for(kl=0;kl<a1;++kl)
                {
                    a[kl]=a[kl]+b[kl];
                }
                for(kl=a1;kl<b2;++kl)
                {
                    a[kl]=b[kl];
                    ++a1;
                }
            }
            int flag=0;
            for(jk=0;jk<a1;++jk)
            {
                if(flag==0)
                {
                    printf("%d",a[jk]);
                    flag=1;
                }
                else printf(" %d",a[jk]);
            }
            printf("\n");
       }


    }


    if((k-1)%2!=0)
    {
        int flag=0;
            for(jk=0;jk<a1;++jk)
            {
                if(flag==0)
                {
                    printf("%d",a[jk]);
                    flag=1;
                }
                else printf(" %d",a[jk]);
            }
            printf("\n");
    }

    return 0;
}


/*{
            k++;
            a1=n;
            for(kl=0;kl<n;++kl)
            {
                scanf("%d",&a[kl]);
            }
            scanf("%d",&b2);
            for(kl=0;kl<b2;++kl)
            {
                scanf("%d",&b[kl]);
            }

            if(a1>=b2)
            {
                for(kl=0;kl<b2;++kl)
                {
                    a[kl]=a[kl]+b[kl];
                }
            }
            else if(a1<b2)
            {
                for(kl=0;kl<a1;++kl)
                {
                    a[kl]=a[kl]+b[kl];
                }
                for(kl=b2-a1+2;kl<b2;++kl)
                {
                    a[a1]=b[kl];
                    ++a1;
                }
            }
            int flag=0;
            for(jk=0;jk<a1;++jk)
            {
                if(flag=0)
                {
                    printf("%d",a[jk]);
                    flag=1;
                }
                else printf(" %d",a[jk]);
            }
        }
        */



/**************************************************************
	Problem: 1051
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

