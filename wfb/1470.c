#include <stdio.h>
#define SWAP(t,x1,x2) t=x1; x1=x2; x2=t;
void PrintMatrix(int ma[][31],int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(j) putchar(' ');
            printf("%d",ma[i][j]);
        }
        putchar('\n');
    }
}
void can(int ma[][31],int temp,int i,int j)
{
	if(i>=0 && i<5 && j>=0 && j<6)
	{
		ma[temp][6*i+j] = 1;
	}
}
void PaddingK(int ma[][31])
{
	int i,j;
	for(i=0; i<5; ++i)
	{
		for(j=0; j<6; ++j)
		{
			int temp=i*6+j;
			ma[temp][temp] = 1;
			can(ma,temp,i,j-1);
			can(ma,temp,i,j+1);
			can(ma,temp,i-1,j);
			can(ma,temp,i+1,j);
		}
	}
}
void MatrixChange(int matrix[][31],int m,int n)
{
    int i,j,k;
    int t;
    for(i=0; i<m; ++i)
    {
        for(j=i; j<m; ++j)
        {
			if(matrix[j][i])
            {
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
        for(j=0;j<m;++j)                         //就此列对应的其他行消为0
        {
            if(i==j) continue;
            if(matrix[j][i])
            {
                for(k=i;k<n;++k)
                    matrix[j][k]^=matrix[i][k];
            }
        }
    }
}
void ReadB(int ma[][31])
{
	int i;
	for(i=0; i<30; ++i)
	{
		scanf("%d",&ma[i][30]);
	}
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
	int ma[30][31] = {0,};
	int n;
	scanf("%d",&n);
	int cnt;
	int i;
	for(cnt=1; cnt<=n; ++cnt)
    {
        PaddingK(ma);
        ReadB(ma);
        MatrixChange(ma,30,31);
        printf("PUZZLE #%d\n",cnt);
        for(i=0;i<30;i++)
        {
            if((i+1)%6==0) printf("%d\n",ma[i][30]);
            else printf("%d ",ma[i][30]);
        }
    }

	return 0;
}

/**************************************************************
	Problem: 1470
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

