#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

bool isEqual(const set<int>& a, const set<int>& b) {
    if(a.size() != b.size()) return false;
    bool is = true;
    set<int>::iterator pa,pb;
    for(pa=a.begin(),pb=b.begin(); pa!=a.end() && pb!=b.end(); ++pa,++pb) {
        if(*pa != *pb) {
            is = false;
            break;
        }
    }
    return is;
}
int main()
{
    set<int> a;
    set<int> b;
    set<int>::iterator ite;
    int tmp;
    int is = 0;
    while(cin>>tmp) {
        if(tmp == 0) ++is;
        else if(is == 0) {
            a.insert(tmp);
        } else if(is == 1) {
            b.insert(tmp);
        }
        if(is == 2) {
            //TODO
            if(isEqual(a,b)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            is = 0;
            a.clear();
            b.clear();
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1350
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

