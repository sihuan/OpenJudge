#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100
int main()
{
    char a[100],b[100];
    while(scanf("%s %s",a,b)!=EOF)
    {
       // printf("%s\n%s",a,b);
       int la=strlen(a),lb=strlen(b);
       int i,x,y,sum=0;
       if(la>lb) {x=lb;y=la-1;}
       else {x=la;y=lb-1;}

       for(i=x-1;i>=0;--i,--y)
       {
           int xx,yy;
           if( lb>la ){  xx=a[i]-'0',yy=b[y]-'0';}
           else {  xx=a[y]-'0',yy=b[i]-'0';}
           if(xx+yy>=10)
           {
                if(la>lb){
                        a[y-1]=a[y-1]+1;
               int ii=y-1;
               while(ii>=0 && a[ii]-'0'>=10)
               {
                   sum++;
                   a[ii]=a[ii]-10;
                   a[ii-1]++;
                   ii--;
                   //sum++;
               }
               sum++;
                }
                else
                {
                b[y-1]=b[y-1]+1;
                int ii=y-1;
                while(ii>=0 && b[ii]-'0'>=10)
                {
                   sum++;
                   b[ii]=b[ii]-10;
                   b[ii-1]++;
                   ii--;
                   //sum++;
                }
               sum++;
                }
           }
       }
       printf("%d\n",sum);
    }
}

/**************************************************************
	Problem: 1172
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

