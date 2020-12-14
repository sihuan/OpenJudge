
#include <stdio.h>
 int main ()
{
    int a,b,c,i=1;
    scanf("start = %d, step = %d, end = %d",&a,&b,&c);

    if(b>0)
    {
        for(;a<=c;a+=b)

        {
            if(i==1)
           {

           printf("%d",a);
            i++;}

            else
            printf(" %d",a);

        }

    }
   else if(b<0)
   {

    for(;a>=c;a+=b)
        {

           if(i==1)
           {

           printf("%d",a);
            i++;}


            else
            printf(" %d",a);
        }

   }





    return 0;

}

/**************************************************************
	Problem: 1091
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

