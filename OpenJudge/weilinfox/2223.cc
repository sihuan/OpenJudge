#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;



int main ()
{
    vector<double> sta;
    double t, sum = 0;
    while (cin >> t) {
        sta.push_back(t);
        sum += t;
    }
    //if (sum == 0) sum = 1;
    int flag = 0;
    for (int i = 0; i < sta.size(); i++) {
        if (flag) cout << ' ';
        else flag = 1;
        if (sta[i] == 0 && sum == 0) cout << "1.00";
        else printf("%.2lf", sta[i]/sum);
    }
    cout << endl;

    return 0;
}

/**************************************************************
	Problem: 2223
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1404 kb
****************************************************************/

