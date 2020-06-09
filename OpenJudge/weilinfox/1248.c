#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int clas;
    int stu[30];
    int sum=0;
    int cas=0;
    int i, j;

    scanf("%d", &clas);
    for (i=0; i<clas; i++) {
        scanf("%d", &stu[i]);
        sum+=stu[i];
    }
    while (scanf("%d", &cas)==1) {
        if (cas%sum!=0)
            cas%=sum;
        else
            cas=sum;
        int num=0;
        for (i=0; num<cas; i++) {
            num+=stu[i];
        }

        i--;
        num-=stu[i];


        printf("Class %c : %d\n", 'A'+i, cas-num);
    }


    return 0;
}

/**************************************************************
	Problem: 1248
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

