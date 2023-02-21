#include <stdio.h>

/* int digit_sum_1(int num){ */
/*   //4294967295 */
/*   if(num>=1&&num<10){ */
/*     return num; */
/*   }else if(num >=10 && num <100){ */
/*     int gw,sw; */
/*     gw = num%10; */
/*     sw = num/10; */
/*     return gw+sw; */
/*   }else if(num>=100&&num<1000){ */
/*     int gw,sw,bw; */
/*     gw = num%10; */
/*     sw = (num/10)%10; */
/*     bw = num/100; */
/*     return gw+sw+bw; */
/*   }else if(num>=1000&&num<10000){ */
/*     int gw,sw,bw,qw; */
/*     gw = num%10; */
/*     sw = (num/10)%10; */
/*     bw = (num/100)%10; */
/*     qw = num/1000; */
/*     return gw+sw+bw+qw; */
/*   }else if(num>=10000&&num<100000){ */
/*     int gw,sw,bw,qw,ww; */
/*     gw = num%10; */
/*     sw = (num/10)%10; */
/*     bw = (num/100)%10; */
/*     qw = (num/1000)%10; */
/*     ww = num/10000; */
/*     return gw+sw+bw+qw+ww; */
/*   }else if(num>=100000&&num<1000000){ */
/*     int gw,sw,bw,qw,ww,sww; */
/*     gw = num%10; */
/*     sw = (num/10)%10; */
/*     bw = (num/100)%10; */
/*     qw = (num/1000)%10; */
/*     ww = (num/10000)%10; */
/*     sww = num/100000; */
/*     return gw+sw+bw+qw+ww+sww; */
/*   }else if(num>=1000000&&num<10000000){ */
/*     int gw,sw,bw,qw,ww,sww,bww; */
/*     gw = num%10; */
/*     sw = (num%10)/10; */
/*     bw = (num/100)%10; */
/*     qw = (num/1000)%10; */
/*     ww = (num/10000)%10; */
/*     sww = (num/100000)%10; */
/*     bww = num/1000000; */
    
/*     return gw+sw+bw+qw+ww+sww+bww; */
    
/*   }else if(num>=10000000&&num<100000000){ */
/*     int gw,sw,bw,qw,ww,sww,bww,qww; */
/*     gw = num%10; */
/*     sw = (num%10)/10; */
/*     bw = (num/100)%10; */
/*     qw = (num/1000)%10; */
/*     ww = (num/10000)%10; */
/*     sww = (num/100000)%10; */
/*     bww = (num/1000000)%10; */
/*     qww = num/10000000; */
    
/*     return gw+sw+bw+qw+ww+sww+bww+qww; */
/*   } */
/*   else if(num>=100000000&&num<1000000000){ */
/*     int gw,sw,bw,qw,ww,sww,bww,qww,yw; */
/*     gw = num%10; */
/*     sw = (num%10)/10; */
/*     bw = (num/100)%10; */
/*     qw = (num/1000)%10; */
/*     ww = (num/10000)%10; */
/*     sww = (num/100000)%10; */
/*     bww = (num/1000000)%10; */
/*     qww = (num/10000000)%10; */
/*     yw = num/100000000; */
    
/*     return gw+sw+bw+qw+ww+sww+bww+qww+yw; */
/*   }else if(num>=1000000000&&num<10000000000u){ */
/*     int gw,sw,bw,qw,ww,sww,bww,qww,yw,syw; */
/*     gw = num%10; */
/*     sw = (num%10)/10; */
/*     bw = (num/100)%10; */
/*     qw = (num/1000)%10; */
/*     ww = (num/10000)%10; */
/*     sww = (num/100000)%10; */
/*     bww = (num/1000000)%10; */
/*     qww = (num/10000000)%10; */
/*     yw = (num/100000000)%10; */
/*     syw = num/1000000000; */
    
/*     return gw+sw+bw+qw+ww+sww+bww+qww+yw+syw; */
/*   } */
/* } */

int digit_sum_1(int num){
  if(num<10)
    return num;
  else
    return num%10+digit_sum_1(num/10);  

}
int digit_sum(int num){
  if(num < 10)
    return num;
  else
    return digit_sum(digit_sum_1(num));

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

