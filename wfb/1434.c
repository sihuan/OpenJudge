#include <stdio.h>
#include <math.h>
#define SWAP(t,x1,x2) t=x1; x1=x2; x2=t;
void MatrixRead(double matrix[][51],int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
            scanf("%lf",&matrix[i][j]);
}
void DividePrint(double matrix[][51],int m,int n)
{
    double D[51];
    int i,j;
    for(i=m-1; i>=0; --i)
    {
        D[i] = matrix[i][n-1];
        for(j=n-2; j>i; --j)
            D[i] -= matrix[i][j]*D[j];
    }
    int cnt = 0;
    for(i=0; i<m; ++i)
    {
        ++cnt;
        printf("x%d=%.3lf\n",cnt,D[i]);
    }
    putchar('\n');
}
void MatrixChange(double matrix[][51],int m,int n)
{
    int i,j,k;
    int isHaveOne,isContinue;
    double t;
    for(i=0; i<m; ++i)
    {
        isHaveOne = 0;
        isContinue = 1;
        for(j=i; j<m; ++j)
        {
            if(fabs(matrix[j][i]-1) < 1e-6)
            {
                for(k=i; k<n; ++k)
                {
                    SWAP(t,matrix[i][k],matrix[j][k]);
                }
                isHaveOne = 1;
                isContinue = 0;
                break;
            }
        }
        if(!isHaveOne)
        {
            for(j=i; j<m; ++j)
            {
                if(matrix[j][i])
                {
                    isContinue = 0;
                    if(j == i) break;
                    else
                    {
                        for(k=i; k<n; ++k)
                        {
                            SWAP(t,matrix[i][k],matrix[j][k]);
                        }
                    }
                }
            }
           for(k=n-1; k>=i; --k)//第i行元素都除以matrix[i][i].
            {
                matrix[i][k] = matrix[i][k] / matrix[i][i];
            }
        }
        if(isContinue) continue;
        for(j=i+1; j<m; ++j)//第i+1行到最后元素都减去上一行的matrix[j][i]倍
        {
            for(k=n-1; k>=i; --k)
            {
                matrix[j][k] -= matrix[j][i]*matrix[i][k];
            }
        }
    }
}
int main()
{
    double matrix[50][51];
    int nn;
    scanf("%d",&nn);
    int i,n;
    for(i=0; i<nn; ++i)
    {
        scanf("%d",&n);
        MatrixRead(matrix,n,n+1);
        MatrixChange(matrix,n,n+1);
        DividePrint(matrix,n,n+1);
    }
    return 0;
}

/**************************************************************
	Problem: 1434
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

