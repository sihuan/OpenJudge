#include <stdio.h>
#include <stdlib.h>
int main()
{
    int day, i, j;
    scanf("%d", &day);
	printf("Sun Mon Tue Wen Thu Fri Sat\n");
        if(day!=7)
        {
		for(i=1; i<=day;i++)
            printf("    ");
        }
        else
        day=0;
        
        i=day+1;
        for(j=1;j<=30;j++)
        {
            printf("%3d", j);
            if(i%7==0&&j!=30)
                printf("\n");
            if(i%7!=0&&j!=30)
                printf(" ");
            i++;
        }
 
    return 0;
}

/**************************************************************
	Problem: 1100
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

