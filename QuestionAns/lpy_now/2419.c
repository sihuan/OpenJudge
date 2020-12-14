#include<stdio.h>

struct date{
    int y,m,d;
};

struct date get_maxdate(){
    struct date max;
    struct date a;
    scanf("%d-%d-%d",&a.y,&a.m,&a.d);
    max.y=a.y,max.m=a.m,max.d=a.d;
    while(scanf("%d-%d-%d",&a.y,&a.m,&a.d)!=EOF){
        if(a.y>max.y){
            max.y=a.y,max.m=a.m,max.d=a.d;
            continue;
        }
        else if(a.y==max.y && a.m>max.m){
            max.y=a.y,max.m=a.m,max.d=a.d;
            continue;
        }
        else if(a.y==max.y && a.m==max.m && a.d>max.d){
            max.y=a.y,max.m=a.m,max.d=a.d;
            continue;
        }
    }
    return max;
}

int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

