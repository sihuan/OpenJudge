#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 200
struct CPLX
{
    int x,y;
};

void get_cplx(struct CPLX *cx);
void put_cplx(struct CPLX cx);
struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2);
struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2);

void get_cplx(struct CPLX *cx)
{
    scanf("%d%d",&(*cx).x,&(*cx).y);
}

void put_cplx(struct CPLX cx)
{
    printf("%d %d\n",cx.x,cx.y);
}

struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    cx1.x=cx1.x+cx2.x;
    cx1.y=cx1.y+cx2.y;
    return cx1;
};

struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
    cx1.x=cx1.x-cx2.x;
    cx1.y=cx1.y-cx2.y;
    return cx1;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

