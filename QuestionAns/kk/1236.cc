#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
#include <iostream>

using namespace std;

int get_int_sum(int &m, int &n)
{
    scanf("%d%d",&m,&n);
    return m+n;
}

int main()
{
    int n, a, b, i;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cout << get_int_sum(a, b) << " = ";
        cout << a << " + " << b << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1236
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

