#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

char card[100];
while(gets(card)!=NULL){
    int len = strlen(card);
    int a[8] = {0};
    int end_num;
    while(!isdigit(card[len-1])){
        len--;
    }
    end_num = card[len-1]-'0';
    //printf("%d\n",end_num);
if(end_num==1||end_num==6){
    a[1]=1;
}
else if(end_num==2||end_num==7){
    a[2]=1;
}
else if(end_num==3||end_num==8){
    a[3]=1;
}
else if(end_num==4||end_num==9){
    a[4]=1;
}
else if(end_num==5||end_num==0){
    a[5]=1;
}
int i;
int count = 0;
for(i = 1;i<=8;i++){

    if(a[i]==0){
        if(count == 0){
        printf("%d",i);
        count = 1;
        }
        else{
        printf(" %d",i);
    }
    }

}
    printf("\n");
}


return 0;
}

/**************************************************************
	Problem: 2301
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

