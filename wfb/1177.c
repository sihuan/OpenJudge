#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int score[1005];
int degree[5];
int main()
{
    int n;
    int i;
    int cnt=0;
    int is;
    while(scanf("%d",&n) != EOF)
    {
        if(n>=0 && n<=100)
        {
            score[cnt++] = n;
            if(n<60) ++degree[0];
            else if(n<70) ++degree[1];
            else if(n<80) ++degree[2];
            else if(n<90) ++degree[3];
            else ++degree[4];
        }
    }
    printf("Excellent : %d\n",degree[4]);
    is = 0;
    for(i=0; i<cnt; ++i)
    {
        if(score[i] >= 90)
        {
            if(is)
                printf(", ");
            printf("%d",score[i]);
            is = 1;
        }
    }
    if(degree[4])
        putchar('\n');
    printf("Good : %d\n",degree[3]);
    is = 0;
    for(i=0; i<cnt; ++i)
    {
        if(score[i] >= 80 && score[i] < 90)
        {
            if(is)
                printf(", ");
            printf("%d",score[i]);
            is = 1;
        }
    }
    if(degree[3])
        putchar('\n');
    printf("Average : %d\n",degree[2]);
    is = 0;
    for(i=0; i<cnt; ++i)
    {
        if(score[i] >= 70 && score[i] < 80)
        {
            if(is)
                printf(", ");
            printf("%d",score[i]);
            is = 1;
        }
    }
    if(degree[2])
        putchar('\n');
    printf("Pass : %d\n",degree[1]);
    is = 0;
    for(i=0; i<cnt; ++i)
    {
        if(score[i] >= 60 && score[i] < 70)
        {
            if(is)
                printf(", ");
            printf("%d",score[i]);
            is = 1;
        }
    }
    if(degree[1])
        putchar('\n');
    printf("Failing : %d\n",degree[0]);
    is = 0;
    for(i=0; i<cnt; ++i)
    {
        if(score[i] < 60)
        {
            if(is)
                printf(", ");
            printf("%d",score[i]);
            is = 1;
        }
    }
    if(degree[1])
        putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 1177
	User: 201601011420
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:752 kb
****************************************************************/

