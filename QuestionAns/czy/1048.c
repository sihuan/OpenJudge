#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{  int i,j,lie,hang,x,time;
   int s[100][100];
 while(scanf("%d",&x)!=EOF)
{  memset(s,0,sizeof(s));
  s[0][x/2]=1;
  hang=0;lie=x/2;
  time=1;
  int kl=0;
  for(kl=0;kl<x*x;++kl)
  { time++;
      --hang;
     ++lie;
     if(hang>=0)
   {
       if(lie<x)
       {if(s[hang][lie]==0)
          s[hang][lie]=time;
        else
          { hang=hang+2;
            lie=lie-1;
              s[hang][lie]=time;
          }

       }

       else
       {   if(s[hang][0]==0)
          {s[hang][0]=time;
           lie=0;
          }
             else
           {  hang=hang+2;
             lie=lie-1;
               s[hang][lie]=time;
              lie=0;
          }
       }
   }
    else
    {
        hang=x-1;
       if(lie<x)
       { if(s[hang][lie]==0)
          s[hang][lie]=time;
         else
         {   hang=0;
            lie=lie-1;
             s[0][lie]=time;
         }
       }
       else
       {
            if(s[hang][0]==0)
          {s[hang][0]=time;
             lie=0;
          }
             else
           { hang=1;
                s[1][lie-1]=time;
            }
       }
    }
  }
   for(i=0;i<x;i++)
   {
       for(j=0;j<x;j++)
       {
           if(j==0)
            printf("%d",s[i][j]);
           else
            printf(" %d",s[i][j]);
       }
       printf("\n");
   }
   printf("\n");
}
}

/**************************************************************
	Problem: 1048
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

