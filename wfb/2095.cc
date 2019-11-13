#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class MyString{
public:
    MyString(){}
    void input(){
        cin>>str_;
    }
    void output(){
        cout<<str_<<endl;
    }
    void del(char* str){
        char tmp[1005];
        int tmp_i = 0;
        for(int i=0; str_[i]; ++i){
            if(!strchr(str,str_[i])){
                tmp[tmp_i++] = str_[i];
            }
        }
        tmp[tmp_i] = 0;
        strcpy(str_,tmp);
    }
private:
    char str_[1005];
};
int main()
{
    MyString str;
    char tmp[11];
    str.input();
    str.output();
    cin>>tmp;
    str.del(tmp);
    str.output();
    return 0;
}

/**************************************************************
	Problem: 2095
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

