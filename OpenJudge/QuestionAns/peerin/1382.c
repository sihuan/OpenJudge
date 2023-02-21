#include <stdio.h>


int get_num(int *a,int *b,int *c){

    return scanf("%d %d %d",a,b,c);

}

int max_min(int *max,int *min,int a,int b,int c){

    *max = a;
    *min = a;

    int ar[3]={a,b,c};
    int i;
    for(i = 0;i < 3;++i){
        if(ar[i]>*max){
            *max = ar[i];
        }
        if(ar[i]<*min){
            *min = ar[i];
        }
    }

    return 0;
}


int main()
{
    int cases, i;
    int mmax, mmin, a, b, c;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        get_num(&a, &b, &c);
        max_min(&mmax, &mmin, a, b, c);
        printf("case %d : %d, %d\n", i, mmax, mmin);
    }
}

/**************************************************************
	Problem: 1382
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

