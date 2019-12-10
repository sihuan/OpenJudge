#include<stdio.h>

struct CPLX{
    int real,imag;
};

void get_cplx(struct CPLX *cx)
{
    scanf("%d %d",&(cx->real),&(cx->imag));
}

void put_cplx(struct CPLX cx)
{
    printf("%d %d\n",cx.real,cx.imag);
}

struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX mcp;
    mcp.real=cx1.real+cx2.real;
    mcp.imag=cx1.imag+cx2.imag;
    return mcp;
};

struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX mcp;
    mcp.real=cx1.real-cx2.real;
    mcp.imag=cx1.imag-cx2.imag;
    return mcp;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

