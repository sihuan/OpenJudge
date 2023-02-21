#include <stdio.h>

int trans(char ch){
	switch(ch){
	case '0':
		printf("0000");
		break;
	case '1':
		printf("0001");
		break;
	case '2':
		printf("0010");
		break;
	case '3':
		printf("0011");
		break;
	case '4':
		printf("0100");
		break;
	case '5':
		printf("0101");
		break;
	case '6':
		printf("0110");
		break;
	case '7':
		printf("0111");
		break;
	case '8':
		printf("1000");
		break;
	case '9':
		printf("1001");
		break;
	case 'A':
		printf("1010");
		break;
	case 'B':
		printf("1011");
		break;
	case 'C':
		printf("1100");
		break;
	case 'D':
		printf("1101");
		break;
	case 'E':
		printf("1110");
		break;
	case 'F':
		printf("1111");
		break;
	}
	return 0;
}

int main(){
	
	char xs[101]={0};
	while(scanf("%s",xs)!=EOF){
		int i;
		for(i = 0;xs[i]!='\0';++i){
			char ch = xs[i];
			trans(ch);
		}
		printf("\n");
	}
	return 0;
}

/**************************************************************
	Problem: 1637
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

