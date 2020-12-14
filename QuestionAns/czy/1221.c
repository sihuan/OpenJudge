#include <stdio.h>

#include <stdlib.h>

#include <math.h>



int main()

{

    int n,i,j,k;

    scanf("%d",&n);

    int t,sum=-1;

    for(i=-n/2;i<=n/2;++i)

    {

        sum++;

        int num=0;

        for(t=-n/2;t<=n/2;++t)

        {

            if(abs(i)+abs(t)<=n/2)

            {

                if(i<=0) printf("%c",'A'+sum+num++);

                else

                {

                    printf("%c",'A'+sum+num++);

                }

            }

            else if(abs(i)+t<n/2)

            {

                printf(" ");

            }

        }

        if(i>=0) {sum-=2;}

        puts("");

    }

    return 0;

}

/**************************************************************
	Problem: 1221
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

