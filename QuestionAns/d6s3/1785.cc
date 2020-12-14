#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name_;
    int score_;

public:
    Student()
        : name_("")
        , score_(0)
    {
    }
    void setStudent(string n, int s)
    {
        name_ = n;
        score_ = s;
    }
    bool operator>(const Student s)
    {
        if (score_ > s.score_)
            return true;
        else if (score_ == s.score_ && name_ < s.name_)
            return true;
        return false;
    }
    friend ostream& operator<<(ostream& out, Student& s)
    {
        out << s.score_ << " " << s.name_;
        return out;
    }
};
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

