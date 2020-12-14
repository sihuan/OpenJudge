#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char  wen[10000];
char out1[101][10];
char out2[101][101];
int main()
{
    int i,time,duan,flag=0,t,k,zhen,x;
    time=0,zhen=0;
    while(gets(wen)!=NULL)
    {
        flag=0;
        for(i=0; wen[i]!=0; i++)
        {
            if(isupper(wen[i])>0&&flag==0)
            {
                duan = i;
                flag = 1;
            }
            if (flag == 1)
            {
                if(wen[i+1]==' ')
                {
                    time=zhen;
                    strcpy(out1[time],wen+duan);
                    out1[time++][i+1-duan]=0;
                    flag=2;
                }
                else if(isupper(wen[i+1])>0) continue;
                else flag=0;
                if(flag==2)
                {
                    if(wen[i+2]!='(')
                        flag = 0;
                    else
                    {
                        x = 0;
                        t= i + 3;
                        for(k = t; wen[k]!=0; k++)

                        {
                            flag = 0;
                            if(wen[k-1] == '('|| wen[k-1] == ' '|| wen[k-1] == '-')
                            {
                                char fengle=wen[k];
                                //救命啊
                                if(fengle>='a'&&fengle<='z') fengle=fengle-'a'+'A';


                                if(fengle!=out1[time-1][x++])break;
                            }

                            if(wen[k]==')')
                            {
                                strcpy(out2[time-1],wen+t);
                                out2[time-1][k-t]=0;
                                zhen++,time=zhen;
                                break;
                            }

                        }
                    }
                }
            }
        }

    }
    if(zhen>0)
    {
        printf("Abbreviation ==> Full Name\n");
        for(i=0; i<zhen; i++)
        {
            if(i+1<10)
                printf("%d:%10s ==> %s\n",i+1,out1[i],out2[i]);
            else
                printf("%d:%9s ==> %s\n",i+1,out1[i],out2[i]);
        }

    }
    else
        printf("There is no abbreviations in this text.\n");


}


/**************************************************************
	Problem: 1063
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:768 kb
****************************************************************/

