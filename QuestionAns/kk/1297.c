#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,i,b,s;
    int n[5];
    while(scanf("%d",&a)!=EOF)
    {
        while(1)
        {
            a++;
            b=a;
            for(i=1; i<=4; i++)
            {
                n[i]=b%10;
                b/=10;
            }
            if(n[1]!=n[2]&&n[1]!=n[3]&&n[1]!=n[4]&&n[2]!=n[3]&&n[2]!=n[4]&&n[3]!=n[4])
            {
                printf("%d\n",a);
                break;
            }
        }
    }


}
/**************************************************************
	Problem: 1297
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

