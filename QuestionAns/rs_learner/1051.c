#include <stdio.h>
#include <string.h>
int main()
{
    int a[1002]={0};
    int b[1002]={0};
    int c[1002]={0};
    int i,j,k=0;
    int d;
    int z;
    int s;
    scanf("%d",&d);
    for(z=1;z<=d;z++)
    {
        k++;
        if(k%2!=0)
        {
            for(i=0;;i++)
               {
                scanf("%d",&a[i]);
                if(a[i]==0)
                {
                a[i]='\0';
                break;
                }
               }
        }
        else
        {
                for(j=0;; j++)
                {scanf("%d",&b[j]);
                if(b[j]==0)
                {b[j]='\0';
                break;
                }
                }

        }
        if(k%2==0)
        {
            if(i>j)
            {
                for(s=0; s<i; s++)
                {
                    c[s]=a[s]+b[s];
                }
                for(s=0; s<i; s++)
                {
                    if(s==0)
                    printf("%d",c[0]);
                    else
                    printf(" %d",c[s]);
                }
                printf("\n");
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));
            }
            else
            {
                for(s=0; s<j; s++)
                {
                    c[s]=a[s]+b[s];
                }
                for(s=0; s<j; s++)
                {
                    if(s==0)
                    printf("%d",c[0]);
                    else
                    printf(" %d",c[s]);
                }
                printf("\n");
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));
            }
        }

    if(k==d&&d%2==1)
        {
        for(s=0; s<i; s++)
        {
            if(s==0)
                printf("%d",a[s]);
            else
                printf(" %d",a[s]);
        }
        printf("\n");
        }
    if(k==d&&d%2==1&&strlen(a)==0)
        {printf("\n");}
    }
}


/**************************************************************
	Problem: 1051
	User: 201801020908
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

