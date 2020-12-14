#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    multiset<int> M;
    multiset<int>::iterator ite;
    int n;
    char op;
    int x;
    while(true){
        M.clear();
        cin>>n;
        if(n == 0) break;
        while(n--){
            cin>>op;
            if(op == 'i') {
                cin>>x;
                M.insert(x);
            }else if(op == 'd'){
                cin>>x;
                ite = M.find(x);
                if(ite != M.end())
                    M.erase(ite);
            }
        }
        for(ite=M.begin(); ite!=M.end(); ++ite) {
            if(ite != M.begin()) cout<<" ";
            cout<<*ite;
        }
        cout<<endl;
    }

    return 0;
}

/**************************************************************
	Problem: 1362
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

