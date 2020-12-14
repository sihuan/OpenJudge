#include<stdio.h>
#include<math.h>
int main()
{
    double xi,yi,xii,yii,x,y,k,d,m,n,r;
    scanf("%lf %lf",&xi,&yi);
    scanf("%lf %lf",&xii,&yii);
    scanf("%lf %lf %lf",&x,&y,&r);
    if(r>0)
    {
        if(xi==xii&&yi!=yii)
            //if(yi!=yii)
                d=fabs(x)+fabs(xi);
        else
        {
            k=(yi-yii)/(xi-xii);
            m=fabs(k*x+(-1)*y+yi-k*xi);
            n=fabs(sqrt(k*k+1));
            d=m/n;
        }
        if(d>r+0.001)
            printf("Disjoint");
        if(d<r-0.001)
            printf("Interseetion");
        if(fabs(d-r)<1e-3)
            printf("Tangency");
 }
}
/*
//关于浮点型数据的精度控制问题，在浮点型数据中，两个数的比较需要进行精度控制，">"形//式，m>n+精度；"<"形式，m<n-精度；"="形*/

/**************************************************************
	Problem: 1197
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

