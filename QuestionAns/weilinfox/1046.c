
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    long long cock, hen, chick, chickM, chickZ, money, chicks;
    long long i, j;
    long long ans=0;
    long long henZ, chicZ;
    int flag=0;


    scanf("COCK,HEN,CHICK,MONEY,CHICKS\n");
    while (scanf("%lld,%lld,%lld/%lld,%lld,%lld", &cock, &hen, &chickM, &chickZ, &money, &chicks)==6) {
        ans=0;
        for (i=0; i<=(money/cock); i++) {
            henZ=(money*chickZ-i*cock*chickZ-chicks*chickM+i*chickM)/(hen*chickZ-chickM);
            chicZ=chicks-i-henZ;
            if (henZ*hen*chickZ+chicZ*chickM+i*cock*chickZ==money*chickZ && henZ>=0 && chicZ>=0) {
                if (ans<1) {
                    if (!flag) {
                        printf("COCKS,HENS,CHICKS\n%lld,%lld,%lld\n", i, henZ, chicZ);
                        ans++;
                        flag=1;
                    } else {
                        printf("\nCOCKS,HENS,CHICKS\n%lld,%lld,%lld\n", i, henZ, chicZ);
                        ans++;
                    }
                } else {
                    printf("%lld,%lld,%lld\n", i, henZ, chicZ);
                }
            }

        }
        if (ans<1 && !flag){
            printf("Cannot buy!\n");
            flag=1;
        }
        else if(ans<1)
            printf("\nCannot buy!\n");
    }

    return 0;
}


/**************************************************************
	Problem: 1046
	User: 201901060401
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:748 kb
****************************************************************/

