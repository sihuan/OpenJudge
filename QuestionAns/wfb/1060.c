#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char *maxNum;
	char *minNum;
	char *tempNum,*p;
	int maxLength,minLength,tempLength;
	int cnt = 0;
	while(1)
	{
		tempNum = (char*)malloc(sizeof(char)*1005);
		if(scanf("%s",tempNum) == EOF) break;
		tempLength =  strlen(tempNum);
		for(p=tempNum; p<=tempNum+tempLength; ++p)
		{
			if(*p != '0')
			{
				tempNum = p;
				break;
			}
		}
		if(cnt++ == 0)
		{
			maxNum = tempNum;
			minNum = tempNum;
		}
		else
		{
			maxLength = strlen(maxNum);
			minLength = strlen(minNum);
			tempLength = strlen(tempNum);
			if(maxLength < tempLength)
				maxNum = tempNum;
			else if(maxLength == tempLength)
			{
				if(strcmp(tempNum,maxNum) > 0)
					maxNum = tempNum;
			}
			if(minLength > tempLength)
				minNum = tempNum;
			else if(minLength == tempLength)
			{
				if(strcmp(tempNum,minNum) < 0)
					minNum = tempNum;
			}
		}
	}
	printf("The maximum value is : ");
	if(*maxNum == '\0') printf("0\n");
	else puts(maxNum);
    printf("The minimum value is : ");
    if(*minNum == '\0') printf("0\n");
    else puts(minNum);

	return 0;
}

/**************************************************************
	Problem: 1060
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

