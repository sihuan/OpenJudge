#include<stdio.h>

struct CPLX{
    int a,b;
};

void get_cplx(struct CPLX *ab){
    scanf("%d%d",&ab->a,&ab->b);
}
struct CPLX add_cplx(struct CPLX ab,struct CPLX cd){
    ab.a+=cd.a,ab.b+=cd.b;
    return ab;
}
struct CPLX sub_cplx(struct CPLX ab,struct CPLX cd){
    ab.a-=cd.a,ab.b-=cd.b;
    return ab;
}
void put_cplx(struct CPLX ab){
    printf("%d %d\n",ab.a,ab.b);
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

