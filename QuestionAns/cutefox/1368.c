#include <stdio.h>
struct CPLX
{
    int a,b;
};
void get_cplx(struct CPLX *cx)
{
    scanf("%d %d",&((*cx).a),&((*cx).b));
}
void put_cplx(struct CPLX cx)
{
    printf("%d %d\n",cx.a,cx.b);
}
struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX sum;
    sum.a=cx1.a+cx2.a;
    sum.b=cx1.b+cx2.b;
    return sum;
};
struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX sum;
    sum.a=cx1.a-cx2.a;
    sum.b=cx1.b-cx2.b;
    return sum;
};


int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}
/**************************************************************
	Problem: 1368
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

