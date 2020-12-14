#include <stdio.h>

int main()
{
    char xm[31];
    double dl, sd, ed;
    while(scanf("%s %lf", xm, &dl) != EOF){
        sd = 0;
        ed = 0;
        if(dl > 4800.0){
            sd = (dl-4800.0)*0.78;
            dl = 4800.0;
        }
        if(dl > 2880.0){
            ed = (dl-2880)*0.53;
            dl = 2880.0;
        }
        printf("%s:%.2lf\n", xm, sd+ed+dl*0.48);
    }
}

/**************************************************************
	Problem: 1211
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

