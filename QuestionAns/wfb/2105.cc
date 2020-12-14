//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

class MyString{
public:
    MyString(){}
    void input(){
        cin>>str_;
    }
    void output(){
        if(!isHui()) cout<<str_<<endl;
        else {
            int l = strlen(str_);
            for(int i=0; i<(l+1)/2; ++i)
                cout<<str_[i];
            cout<<endl;
        }
    }
private:
    char str_[1005];
    bool isHui() {
        int l = strlen(str_);
        bool is = true;
        for(int i=0; i<l/2; ++i){
            if(str_[i] != str_[l-i-1]){
                is = false;
                break;
            }
        }
        return is;
    }
};
int main()
{
    MyString str;
    int n, i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        str.input();
        str.output();
    }
    return 0;
}

/**************************************************************
	Problem: 2105
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

