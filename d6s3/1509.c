#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char wz[100000]={'\0'};
    int zf=0,xx=0,dx=0,sz=0,kb=0,bd=0;
    int i=0,j,s,wl;
    char aaa;
    char zm;
    while(scanf("%c",&aaa)!=EOF){
        zf++;
        if(islower(aaa))
            xx++;
        else if(isupper(aaa))
            dx++;
        else if(isdigit(aaa))
            sz++;
        else if(isspace(aaa))
            kb++;
        else
            bd++;
        wz[i]=aaa;
        i++;
    }
    printf("All Characters : %d\n",zf);
    printf("Lowers : %d\n",xx);
    printf("Uppers : %d\n",dx);
    printf("Digits : %d\n",sz);
    printf("Spaces : %d\n",kb);
    printf("Puncts : %d\n",bd);
    wl=strlen(wz);
    for(i=1;i<=26;i++){
        s=0;
        zm='a'+i-1;
        for(j=0;j<wl;j++){
            if(wz[j]==zm)
                s++;
        }
        zm-=32;
        for(j=0;j<wl;j++){
            if(wz[j]==zm)
                s++;
        }
        printf("%c : %d\n",zm,s);
    }
}

/**************************************************************
	Problem: 1509
	User: 201901060610
	Language: C
	Result: Accepted
	Time:40 ms
	Memory:772 kb
****************************************************************/

