#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    long int y,m;
    m=pow(2,31);
    while (scanf("%ld",&y)!=EOF)
    {
        int q=0,b=0,s=0,g=0;
        for(int i=y+1;i<=m-1;i++)
        {
            q=i/1000;
            b=(i-q*1000)/100;
            s=(i-q*1000-b*100)/10;
            g=i%10;
            if(q!=b&&q!=s&&q!=g&&b!=s&&b!=g&&s!=g)
                {printf("%d\n",i);
            break;}
        }

    }
    return 0;
}
/**************************************************************
	Problem: 1297
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

