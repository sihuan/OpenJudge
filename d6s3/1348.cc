#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string cmd;
    int a, b, c;
    cin >> cmd >> a >> b;
    vector<int> v(a, b);
    while (cin >> cmd >> a >> b) {
        if (cmd == "Insert") {
            cin >> c;
            v.insert(v.begin() + a - 1, v.begin() + b - 1, v.begin() + c);
        } else if (cmd == "Modify")
            v[a - 1] = b;
        else if (cmd == "Erase")
            v.erase(v.begin() + a - 1, v.begin() + b);
        else {
            cout << "[" << a << "]:" << v[a - 1];
            for (int i = a + 1; i <= b; i++)
                cout << " [" << i << "]:" << v[i - 1];
            cout << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1348
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:304 ms
	Memory:118468 kb
****************************************************************/

