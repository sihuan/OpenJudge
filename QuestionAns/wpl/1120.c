#include<stdio.h>

int main()

{

int number;

int countPositive=0,countNegative=0;

int sumPositive=0,sumNegative=0;

float avgPositive,avgNegative;

scanf("%d",&number);

while(number != 0)

{

if(number < 0) // the number is Positive.

{

sumPositive += number;

countPositive++;

}

else // the number is Negative.

{

sumNegative += number;

countNegative++;

}

scanf("%d",&number);

}

// calculate average

/* notice:convert to float,if you not do this ,you can't get the right answer*/

avgPositive = (sumPositive*1.0)/countPositive;

avgNegative = (sumNegative*1.0)/countNegative;

// Output

if(countPositive != 0) printf("%d %.2f\n",countPositive,avgPositive);

else printf("%d\n",countPositive);

if(countNegative != 0) printf("%d %.2f\n",countNegative,avgNegative);

else printf("%d\n",countNegative);

return 0;

}
/**************************************************************
	Problem: 1120
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

