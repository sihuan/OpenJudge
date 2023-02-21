#include <stdio.h>
#include <stdlib.h>
//两个整数的最大公约数等于其中较小的数和两数的差的最大公约数。
//继续进行同样的计算可以不断缩小这两个数直至其中一个变成零
//#define MAX 1000
int min(int a,int b){
int result;
if(a<b)
    result = a;
else if(b<a)
    result = b;
else
    result = a;
return result;
}

int gcd(int a,int b){
//最大公约数
if(a == 0){
    return b;

}
else if(b == 0)
    return a;
else
    gcd(min(a,b),abs(a-b));
}
//int lcm(int a,int b){
////最小公倍数
//if(a%b==0)
//return a;
//else if(b%a==0)
//    return b;
//else{
//    int i;
//    for(i = 1;i<=MAX;++i){
//            int temp = a*i;
//            int j;
//        for(j = 1;j<=MAX;++j){
//            if(temp == j*b)
//            return temp;
//        }
//    }
//
//
//}
//return 0;
//}
int lcm(int a,int b){

return a/gcd(a,b)*b;

}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1228
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:816 kb
****************************************************************/

