#include <stdio.h>
#include <stdlib.h>

double * allocate(int n){

    return (double *)malloc(sizeof(double)*n);

}

void output(double *p, int N){
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>n){
        int temp = m;
        m = n;
        n = temp;
    }
    int f = 0,bg,ed;
    if(m<1)
        bg = 0;
    else
        bg = m-1;
    if(n>N)
        ed = N;
    else
        ed = n;

    int i;
    for(i = bg;i < ed;++i){
        f = 1;
        printf("%g\n",p[i]);
    }
    if(f==0){
        printf("no output\n");
    }

}

void input(double *p, int N){
    int i;
    for(i = 0;i < N;++i){
        scanf("%lf",p+i);
    }
}

void release(double *p){
    free(p);
}


int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
/**************************************************************
	Problem: 1383
	User: 202211070518
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:3092 kb
****************************************************************/

