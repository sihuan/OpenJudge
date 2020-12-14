#include <stdio.h>
#include <stdlib.h>



    int main ()
 {
    int start,step,end;
    scanf("start = %d, step = %d, end = %d",&start,&step,&end);
    if(step>0)
    {
      printf("%d",start);
     for(start=start+step;start<=end;start=start+step)

       {
         printf(" %d",start);
       }
    }
    if(step<0)
    {
        printf("%d",start);
        for(start=start+step;start>=end;start=start+step)
        {
           printf(" %d",start);
        }
    }
         return 0;

 }



/**************************************************************
	Problem: 1091
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

