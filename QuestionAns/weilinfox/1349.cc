#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>

using namespace std;

void print(set<int>& t)
{
    set<int>::iterator it;
    cout << '{';
    for(it = t.begin(); it != t.end(); it++) {
        if (it != t.begin()) cout << ", ";
        cout << *it;
    }
    cout << '}' << endl;
}

int main()
{

    int n;
    cin >> n;
    int cas = 0;
    while (n--) {
        cout << "Case# " << ++cas << ":" << endl;
        set<int> s1;
        set<int> s2;
        set<int> ans1, ans2, ans3, ans4, ans5;
        int c;
        cin>>c;
        for(int i=0; i<c; i++) {
            int tmp;
            cin>>tmp;
            s1.insert(tmp);
        }
        int k;
        cin >> k;
        for(int i = 0; i < k; i++) {
            int tmp;
            cin >> tmp;
            s2.insert(tmp);
        }
        cout << "A = ";
        print(s1);

        cout << "B = ";
        print(s2);

        set_union(s1.begin(),s1.end(),s2.begin(),s2.end(), \
                  inserter(ans1,ans1.begin()));
        cout << "A u B = ";
        print(ans1);

        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), \
                         inserter(ans2, ans2.begin()));
        cout << "A n B = ";
        print(ans2);

        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), \
                       inserter(ans3, ans3.begin()));
        cout << "A - B = ";
        print(ans3);

        set_difference(ans1.begin(), ans1.end(), s1.begin(), s1.end(), \
                       inserter(ans4, ans4.begin()));
        cout << "SA = ";
        print(ans4);

        set_difference(ans1.begin(), ans1.end(), s2.begin(), s2.end(), \
                       inserter(ans5, ans5.begin()));
        cout << "SB = ";
        print(ans5);

    }
    return 0;
}

/**************************************************************
	Problem: 1349
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

