#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() 
{
        vector<int> vct;
        int n;
        int maxx;

        cin >> n;
        maxx = n;
        vct.push_back(n);
        while (cin >> n) {
                if (n > maxx) {
                        vct.clear();
                        vct.push_back(n);
                        maxx = n;
                } else if (n == maxx)
                        vct.push_back(n);
        }

        cout << "There are " << vct.size() << " maximum number " << maxx << '.' << endl;

        return 0;
}

/**************************************************************
	Problem: 2076
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:1272 kb
****************************************************************/

