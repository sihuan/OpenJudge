#include<stdio.h>
#include<string.h>


int main(int argc, const char *argv[])
{

	char str[101] = "\0";
	int i, j, n,ch;
	gets(str);
	n = strlen(str);                //获取字符串的长度
	i = 0;
	j = n-1;
	while(i < j){
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i++;
		j--;
	}
	puts(str);

	return 0;
}

/**************************************************************
	Problem: 1092
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

