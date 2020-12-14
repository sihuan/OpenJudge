#include<stdio.h>
int main()
{
    int m,i,j=1,sum=0,a,b,c;


        while(scanf("%d",&m)!=EOF)
        {

            for(i=100;i<1000;i++)
            {
                a=i/100;
                b=i/10-10*a;
                c=i%100-10*b;
                if(a==b||b==c||c==a)
                    continue;
                else if(i%m==0)
                    sum=sum+i;
            }
        if(i==1000)
        printf("case %d:%d\n",j,sum);
            j=j+1;
            sum=0;
        }

    return 0;
}

/**************************************************************
	Problem: 1207
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

