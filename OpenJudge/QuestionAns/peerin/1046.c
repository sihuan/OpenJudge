#include<stdio.h>

int main()
{
    int a_cock_money, b_hen_money, c_chick_num, d_chick_money, m_money, n_num, x_cock, y_hen, z_chick, f=0;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    while(scanf("%d,%d,%d/%d,%d,%d",&a_cock_money,&b_hen_money,&c_chick_num,&d_chick_money,&m_money,&n_num) != EOF)
    {
         f=0;

          for(x_cock=0;x_cock<=m_money/a_cock_money;x_cock++)
            {

                y_hen=(m_money*d_chick_money-c_chick_num*n_num+x_cock*(c_chick_num-a_cock_money*d_chick_money))/(b_hen_money*d_chick_money-c_chick_num);
               z_chick=n_num-x_cock-y_hen;
                if(x_cock>=0&&y_hen>=0&&z_chick>=0&&a_cock_money*d_chick_money*x_cock+b_hen_money*d_chick_money*y_hen+c_chick_num*z_chick==d_chick_money*m_money)
                {
                    if(f==0)
                        printf("COCKS,HENS,CHICKS\n");
                    f=1;
                    printf("%d,%d,%d\n", x_cock, y_hen, z_chick);
                }
            }
            if(f==0)
                printf("Cannot buy!\n");
               printf("\n");

    }
    return 0;
}

/**************************************************************
	Problem: 1046
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

