#include <stdio.h> 
int main()
 {   
     unsigned long long int m,s,i;    
     scanf("%llu",&m);   
        if(m%2==0)         
            s=m/2*(m+1);  
       else       
            s=(m+1)/2*m;     
            printf ("%llu",s);
            return 0;
       }
/**************************************************************
	Problem: 1015
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

