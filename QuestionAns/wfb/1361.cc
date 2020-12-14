#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    multiset<int> M;
    int n;
    char op;
    int x;
    while(true){
        M.clear();
        cin>>n;
        if(n == 0) break;
        while(n--){
            cin>>op;
            if(op == 'B') {
                cin>>x;
                M.insert(x);
            }else if(op == 'G'){
                cout<<*M.begin()<<endl;
                M.erase(M.begin());
            }
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1361
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1264 kb
****************************************************************/

