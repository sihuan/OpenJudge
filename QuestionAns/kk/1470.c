#include<stdio.h>
#include<string.h>
void copy(int lit[][8],int stor[][8])
{
    for(int i=0;i<7;i++)
        for(int j=0;j<8;j++)
            stor[i][j]=lit[i][j];
}
void change(int lit[][8],int i,int j)
{
    if(lit[i][j]==0)
        lit[i][j]=1;
    else
        lit[i][j]=0;
}
void input(int lit[][8])
{
    for(int i=1; i<6; i++)
        for(int j=1; j<7; j++)
            scanf("%d",&lit[i][j]);
}
void first_line_is(int opr[][6],int i)
{
    for(int j=0; j<6; j++)
    {
        opr[0][j]=i%2;
        i/=2;
    }
}
void first_line(int opr[][6],int lit[][8])
{
    for(int i=0; i<6; i++)
    {
        int j;
        j=i+1;
        if(opr[0][i]==1)
        {
            change(lit,1,j);
            change(lit,1,j+1);
            change(lit,1,j-1);
            change(lit,0,j);
            change(lit,2,j);
        }
    }
}
void next_lines(int opr[][6],int lit[][8],int line)
{
    for(int i=1; i<7; i++)
        if(lit[line-1][i]==1)
        {
            opr[line-1][i-1]=1;
            change(lit,line,i);
            change(lit,line,i+1);
            change(lit,line,i-1);
            change(lit,line-1,i);
            change(lit,line+1,i);
        }
}
int judge_last_line(int lit[][8])
{
    for(int i=1; i<7; i++)
    {
        if(lit[5][i]!=0)
            return 0;
    }
    return 1;
}
void output(int opr[][6],int k)
{
    printf("PUZZLE #%d\n",k+1);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(j==0)
                printf("%d",opr[i][j]);
            else
                printf(" %d",opr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int k=0; k<n; k++)
    {
        int lit[7][8]= {0},opr[5][6]= {0},stor[7][8];
        input(lit);
        copy(lit,stor);
        for(int i=0;i<64;i++)
        {
            copy(stor,lit);
            first_line_is(opr,i);
//            for(int j=0;j<6;j++)
//            {
//                scanf("%d",&opr[0][j]);
//            }
//            for(int j=0;j<6;j++)
//                printf("%d ",opr[0][j]);
//            printf("\n");
            first_line(opr,lit);
            for(int j=2; j<=5; j++)
                next_lines(opr,lit,j);
            if(judge_last_line(lit))
            {
                output(opr,k);
                break;
            }
            memset(opr,0,sizeof(opr));
        }
    }
}

/**************************************************************
	Problem: 1470
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

