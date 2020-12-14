
#include<stdio.h>
 int main()
 {
     int n,k,i,count=0;
     scanf("%d",&n);
     printf("Sun Mon Tue Wen Thu Fri Sat\n");
     if(n==7)
     {     for(i=1;i<=30;i++)
         { printf("%3d",i);
           if(i%7!=0&&i!=30) printf(" ");
           if(i%7==0&&i!=30) printf("\n");
         }
      }
     if(n!=7)
      {   while(n--) {printf("    ");count++;}
          for(i=1;i<=30;i++)
             {
                  printf("%3d",i); count++;
               if(count%7!=0&&i!=30) printf(" ");
               if(count%7==0&&i!=30) printf("\n");
             }


      }
      return 0;
 }

/**************************************************************
	Problem: 1100
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

