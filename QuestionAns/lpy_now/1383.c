#include<stdio.h>
#include<stdlib.h>

double *allocate(int n){
    double *a;
    a=malloc(sizeof(double)*n);
    return a;
}
void input(double *p,int n){
    int i;
    for(i=0;i<n;++i){
        scanf("%lf",&p[i]);
    }
}
void output(double *p,int n){
    double x,y;
    int i;
    int flag=1;
    scanf("%lf%lf",&x,&y);
    if(x>n || y<1){
        printf("no output");
        return ;
    }
    else{
        if(x<0){
            x=0;
        }
        else{
            x-=1;
        }
        if(y>n){
            y=n;
        }
        for(i=x;i<y;++i){
            printf("%lg\n",p[i]);
        }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:3092 kb
****************************************************************/

