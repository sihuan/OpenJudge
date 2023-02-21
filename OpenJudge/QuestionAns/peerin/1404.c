#include<stdio.h>
#include<math.h>
int main(){
int P_1,P_2,P_3,P_s;
int R_1,R_2,R_3;
scanf("%d%d%d%d",&P_1,&P_2,&P_3,&P_s);
scanf("%d%d%d",&R_1,&R_2,&R_3);
if(R_1<P_1||R_2<P_2||R_3<P_3||(R_1+R_2+R_3)<P_s){
    printf("sorry");
}
else{
    printf("congratulations");
}
return 0;
}

/**************************************************************
	Problem: 1404
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

