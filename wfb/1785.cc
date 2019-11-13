#include <iostream>

using namespace std;

class Student{
private:
    string n_;
    int s_;
public:
    friend ostream& operator<<(ostream& os,const Student& s);
    Student() : n_(""),s_(0){}
    void setStudent(string n,int s){n_=n; s_=s;}
    bool operator>(const Student& s) {
        if(s_>s.s_) return true;
        if(s_ == s.s_) {
            if(n_<s.n_) return true;
        }
        return false;
    }
};
ostream& operator<<(ostream& os,const Student& s){
    os<<s.s_<<" "<<s.n_;
    return os;
}
int main()
{
    int cases;
    string name;
    int score;
    cin>>cases;
    Student students[cases], temp;
    for (int i = 0; i < cases; i++)
    {
       cin>>name>>score;
       students[i].setStudent(name, score);
    }
    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < cases - i - 1; j++)
        {
            if (!(students[j] > students[j + 1]))
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cases; i++)
        cout<<students[i]<<endl;
    return 0;
}
/**************************************************************
	Problem: 1785
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

