#include "stdio.h"
#include "string.h"
#include "math.h"
#include "malloc.h"
#include "stdlib.h"

double* allocate(int n)//，在动态内存上分配n个元素的double型数组，并返回其首地址。
{
    double *p=(double *)malloc(n*sizeof(double));
    return p;
}
void input(double* p, int n)//，向p中输入n个double型数值。
{
    int i;
    for(i=0;i<n;++i)
    {
        scanf("%lf",&*(p+i));
    }
}
void output(double* p, int n)//，把长度为n的数组p中符合条件的第m个～第n个元素输出，m和n从标准输入读取。
{
    int i,m,m2;
    scanf("%d%d",&m,&m2);
    if(m<1) m=1;
    if(m2>n) m2=n;
    if(m>m2) printf("no output\n");
    for(i=m-1;i<m2;++i) printf("%lg\n",*(p+i));
}
void release(double* p)//，释放p所指的动态内存空间。
{
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:3092 kb
****************************************************************/

