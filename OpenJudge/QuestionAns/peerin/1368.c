#include <stdio.h>
struct CPLX{
  int real;
  int virtual;
};

void get_cplx(struct CPLX *cplx){
  scanf("%d%d",&cplx->real,&cplx->virtual);
}

void put_cplx(struct CPLX cplx){
  printf("%d %d\n",cplx.real,cplx.virtual);
}

struct CPLX add_cplx(struct CPLX n1,struct CPLX n2){
  struct CPLX res = {
    n1.real + n2.real,
    n1.virtual + n2.virtual
  };
  return res;
}

struct CPLX sub_cplx(struct CPLX n1,struct CPLX n2){
  struct CPLX res = {
    n1.real - n2.real,
    n1.virtual - n2.virtual
  };
  return res;
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

