#include <stdio.h>
typedef struct CPLX
{
    int i;
    int j;
}CPLX;
void get_cplx(struct CPLX *cx)
{
    scanf("%d%d",&cx->i,&cx->j);
}
void put_cplx(struct CPLX cx)
{
    printf("%d %d\n",cx.i,cx.j);
}
struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    CPLX cx3;
    cx3.i = cx1.i + cx2.i;
    cx3.j = cx1.j + cx2.j;
    return cx3;
}
struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
    CPLX cx3;
    cx3.i = cx1.i - cx2.i;
    cx3.j = cx1.j - cx2.j;
    return cx3;
}

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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

