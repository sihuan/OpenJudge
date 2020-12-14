#include<stdio.h> 

int main(){ 
    float a,b; 
    scanf("(%f, %f)",&a,&b); 
    if(a>0 && b>0){
    	printf("(%.1f, %.1f) is in quadrand I",a,b); 
	}    
    if(a>0 && b<0){
    	printf("(%.1f, %.1f) is in quadrand IV",a,b); 
	}   
    if(a<0 && b>0){
    	printf("(%.1f, %.1f) is in quadrand II",a,b);
	} 
    if(a<0 && b<0){
    	printf("(%.1f, %.1f) is in quadrand III",a,b);
	}
    if(a==0 && b!=0){
    	printf("(%.1f, %.1f) is on the y axis",a,b); 
	} 
    if(b==0 && a!=0){
    	printf("(%.1f, %.1f) is on the x axis",a,b); 
	}
    if(a==0 && b==0){
    	printf("(%.1f, %.1f) is origin",a,b); 
	}
    return 0; 
}

/**************************************************************
	Problem: 1162
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

