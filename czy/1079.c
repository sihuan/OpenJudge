#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,i,j,k,low,highest,higher,temp;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d%d",&low,&higher,&highest);
        if(low>higher) {temp=low;low=higher;higher=temp;}
        if(low>highest) {temp=low;low=highest;highest=temp;}
        if(higher>highest) {temp=higher;higher=highest;highest=temp;}
       // printf("%d%d%d",low,higher,highest);
        if(low+higher>highest && highest-low<higher)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}



/**************************************************************
	Problem: 1079
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

