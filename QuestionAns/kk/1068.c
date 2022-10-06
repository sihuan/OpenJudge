#include<stdio.h>
int main()
{
    int s,n;
    while(1)
    {
        scanf("%d%d",&s,&n);
        if(s==0&&n==0)
            break;
        int re=n;
        int i,m,a;
        for(a=1;n/a>10;a*=10);
        for(i=1;a>0;a/=10)
        {
            m=n/a;
            if(i==1)
            {
                putchar(' ');
                i++;
            }
            else if(i!=1)
            {
                putchar(' ');
                putchar(' ');
            }
            for(int j=1;j<=s;j++)
            {
                if(m==2||m==3||m==5||m==6||m==7||m==8||m==9||m==0)
                    putchar('-');
                else
                    putchar(' ');
            }
            putchar(' ');
            n=n%a;
        }
        printf("\n");

        n=re;

        for(int j=1;j<=s;j++)
        {
            n=re;
            for(a=1;n/a>10;a*=10);
            for(i=1;a>0;a/=10)
            {
                m=n/a;
                if(i==1)
                    i++;
                else if(i!=1)
                    putchar(' ');
                if(m==4||m==5||m==6||m==8||m==9||m==0)
                    putchar('|');
                else
                    putchar(' ');
                for(int l=1;l<=s;l++)
                    putchar(' ');
                if(m==1||m==2||m==3||m==4||m==7||m==8||m==9||m==0)
                    putchar('|');
                else
-                   putchar(' ');
                n%=a;
            }
            printf("\n");
        }

        n=re;

        for(a=1;n/a>10;a*=10);
        for(i=1;a>0;a/=10)
        {
            m=n/a;
            if(i==1)
            {
                putchar(' ');
                i++;
            }
            else if(i!=1)
            {
                putchar(' ');
                putchar(' ');
            }
            for(int j=1;j<=s;j++)
            {
                if(m==2||m==3||m==4||m==5||m==6||m==8||m==9)
                    putchar('-');
                else
                    putchar(' ');
            }
            putchar(' ');
            n=n%a;
        }
        printf("\n");

        n=re;

        for(int j=1;j<=s;j++)
        {
            n=re;
            for(a=1;n/a>10;a*=10);
            for(i=1;a>0;a/=10)
            {
                m=n/a;
                if(i==1)
                    i++;
                else if(i!=1)
                    putchar(' ');
                if(m==2||m==6||m==8||m==0)
                    putchar('|');
                else
                    putchar(' ');
                for(int l=1;l<=s;l++)
                    putchar(' ');
                if(m==1||m==3||m==4||m==5||m==6||m==7||m==8||m==9||m==0)
                    putchar('|');
                else
-                   putchar(' ');
                n%=a;
            }
            printf("\n");
        }

        n=re;

        for(a=1;n/a>10;a*=10);
        for(i=1;a>0;a/=10)
        {
            m=n/a;
            if(i==1)
            {
                putchar(' ');
                i++;
            }
            else if(i!=1)
            {
                putchar(' ');
                putchar(' ');
            }
            for(int j=1;j<=s;j++)
            {
                if(m==2||m==3||m==5||m==6||m==8||m==9||m==0)
                    putchar('-');
                else
                    putchar(' ');
            }
            putchar(' ');
            n=n%a;
        }
        printf("\n");

        printf("\n");

    }
}

/**************************************************************
	Problem: 1068
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

