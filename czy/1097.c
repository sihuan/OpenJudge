#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0,m=0,caseq=470,temp,first=0,second=0,third=0;
    while(scanf("%d%d%d",&first,&second,&third)!=EOF)
    {
        if(first==0&&second==0&&third==0) break;
        if(first>second) {temp=first;first=second;second=temp;}
        if(first>third) {temp=first;first=third;third=temp;}
        if(second>third) {temp=second;second=third;third=temp;}
     //  printf(" %d%d%d ",first,second,third);
        if(first+second<=third || third-first>=second)
        {
            printf("not a triangle\n");
            continue;
        }
        if((first==second && first!=third)||(first==third && first!=second) || (second==third&& second!=first))  printf("a isosceles triangle\n");
       else if(first==second && first==third)  printf("a equileteral triangle\n");
       else if(first*first+second*second==third*third) printf("a right triangle\n");
       else printf("a triangle\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1097
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

