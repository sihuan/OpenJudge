#include<stdio.h>
int main()
{
    int min,i,a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            printf("0 0\n");
        else if(a==0&&b!=0)
            printf("%d 0\n",b);
        else if(a!=0&&b==0)
            printf("%d 0\n",a);
        else
        {
          if(a>b)
            min=b;
        else
            min=a;
        for(i=min;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
            {
                printf("%d ",i);
                break;
            }

        }
            printf("%d\n",a*b/i);

       }


    }
    return 0;
}
/**************************************************************
	Problem: 1041
	User: 201801020908
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

