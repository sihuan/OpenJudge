#include<stdio.h>
int main()
{
	int min,max,min_o,max_o;
	int i,tmp,rst,count;
	char input[100];

	while(gets(input))
	{
		rst = 0;
		sscanf(input,"%d %d",&min_o,&max_o);
		if(max_o > min_o )
		{
			min = min_o;
			max = max_o;
		}
		else
		{
			max = min_o;
			min = max_o;
		}

		if(max%2 == 0)
		{
			count = 0;
			tmp = max;
			while(tmp != 1)
			{
				if(tmp%2 == 0)
					tmp /= 2;
				else tmp = tmp*3 + 1;

				count ++;
			}
			if(count > rst)
				rst = count;
		}

		tmp = max/2;
		if(tmp%2 == 0)
			tmp ++;

		if(tmp < min)
		{
			if(min%2 == 0)
				tmp = min + 1;
			else tmp = min;
		}

		for(i = tmp;i <= max;i += 2)
		{
			tmp = i;
			count = 0;
			while(tmp != 1)
			{
				if(tmp%2 == 0)
					tmp /= 2;
				else tmp = tmp*3 + 1;

				count ++;
			}
			if(count > rst)
			{
				rst = count;
			}
		}
		printf("%d %d %d\n",min_o,max_o,rst + 1);
	}

	return 0;
}

/**************************************************************
	Problem: 1049
	User: 201801020908
	Language: C
	Result: Accepted
	Time:1800 ms
	Memory:748 kb
****************************************************************/

