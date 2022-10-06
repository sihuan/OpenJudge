#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    double inp[100];
    int m,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        double tempd;
        scanf("%d",&m);
        for(int j=0;j<m;j++)
            scanf("%lf",&inp[j]);
//        for(int j=0;j<m;j++)
//        {
//            if(j==m-1)
//                printf("%.1lf\n",inp[j]);
//            else
//                printf("%.1lf ",inp[j]);
//        }
        for(int j=0;j<m-1;j++)
            for(int s=0;s<m-j-1;s++)
            {
                if((int)inp[s]>(int)inp[s+1])
                {
                    tempd=inp[s];
                    inp[s]=inp[s+1];
                    inp[s+1]=tempd;
                }
            }
        for(int j=0;j<m;j++)
        {
            if(j==m-1)
                printf("%.1lf\n",inp[j]);
            else
                printf("%.1lf ",inp[j]);
        }
    }
}

/**************************************************************
	Problem: 2045
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

