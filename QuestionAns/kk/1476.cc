#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
typedef struct Clothes
{
  int highTem;
  int lowTem;
  int beauty;
}Clo;
int main()
{
    int curTem,standard,num,order=0;
    scanf("%d%d%d",&curTem,&standard,&num);
    Clo one,bestone;
    bestone.beauty=0;
    int i,s=0;
    for(i=0;i<num;i++)
    {
        scanf("%d%d%d",&one.lowTem,&one.highTem,&one.beauty);
        if(one.lowTem<=curTem&&one.highTem>=curTem&&one.beauty>=standard&&one.beauty>bestone.beauty)
        {
            bestone=one;
            order=i+1;
        }
        else
            if(one.lowTem<=curTem&&one.highTem>=curTem)
                s++;
    }
    if(order>0)
        printf("Choose %d dress.",order);
    else
    {
        if(!s)
            printf("All the dress are inappropriate. Buy new one!");
        else
            printf("All the dress are ugly. Buy new one!");
    }
}

/**************************************************************
	Problem: 1476
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

