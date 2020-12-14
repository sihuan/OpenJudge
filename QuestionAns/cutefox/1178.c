#include <stdio.h>
#include <string.h>
int main()
{
int array[101] = {0};
int i;
int max = 0;
while (scanf("%d",&i) != EOF)
{
if (i >= 0 && i <= 100)
{
array[i]++;
}
}
for (i = 0; i < 101 ;i++)
{
if (max < array[i])
max = array[i];
}
for (i = 0; i < 101; i++)
{
if (array[i] == max)
printf("%d\n",i);
}
return 0;
}
/**************************************************************
	Problem: 1178
	User: 201901060203
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

