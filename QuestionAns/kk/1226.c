#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int output(int i)
{
    printf("case %d:",i);
}
int py(int i,int j,int s,int x)
{


        if(x==1)
            printf("%d,%d,%d",i,j,s);
        else
            printf(";%d,%d,%d",i,j,s);
        x++;

}
int main()
{
    int a,b,n=1,m;
    while(scanf("%d%d",&a,&b)!=EOF)
        {
            output(n);
            m=1;
            for(int i=a;i<=b;i++)
                for(int j=i+1;j<=b-1;j++)
                    {
                        int s;
                        s=sqrt(i*i+j*j);
                        if((s*s==i*i+j*j)&&(s<=b))
                        {
                             py(i,j,s,m);
                            m++;
                        }

                    }

            if(m==1)
                printf("No pythagorean triple");

            printf("\n");
            n++;
        }
}
/**************************************************************
	Problem: 1226
	User: 202001060117
	Language: C
	Result: Accepted
	Time:376 ms
	Memory:756 kb
****************************************************************/

