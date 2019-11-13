#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    deque<string> D;
    int n;
    int op;
    string ch;
    cin>>n;
    while(n--) {
        cin>>op;
        if(op == 1) {
            cin>>ch;
            D.push_front(ch);
        }else if(op == 2) {
            cin>>ch;
            D.push_back(ch);
        }else if(op == 3) {
            if(D.empty()) cout<<"-1"<<endl;
            else cout<<D.back()<<endl;
        }else if(op == 4) {
            if(D.empty()) cout<<"-1"<<endl;
            else cout<<D.front()<<endl;
        }else if(op == 5) {
            if(D.empty()) cout<<"-1"<<endl;
            else D.pop_back();
        }else if(op == 6) {
            if(D.empty()) cout<<"-1"<<endl;
            else D.pop_front();
        }else if(op == 0) {
            D.clear();
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1359
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

