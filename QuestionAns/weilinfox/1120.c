
#include <stdio.h>
int main()
 {
    int a;
    int sum=0, num=0;
    int summ=0, numm=0;
    int sumz=0, numz=0;
    while (scanf("%d", &a)==1&&a!=0) {
        if (a<0) {
            summ+=a;
            numm++;
            sum+=a;
            num++;
        } else if(a>0) {
            sumz+=a;
            numz++;
            sum+=a;
            num++;
        } else {
            sum+=a;
            num++;
        }
    }
    if (numm>0) {
        printf("%d %.2lf\n", numm, summ*1.0/numm);
    } else {
        printf("0\n");
    }
    if (numz>0) {
        printf("%d %.2lf\n", numz, sumz*1.0/numz);
    } else {
        printf("0\n");
    }
    return 0;
 }

/**************************************************************
	Problem: 1120
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

