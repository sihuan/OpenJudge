#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <cstring>

using namespace std;

class Student
{
public:
    Student(){}
    void setStudent(string _name,int _score)
    {
        name=_name;
        score=_score;
    }
    bool operator >(Student &stu)
    {
        if(score>stu.score)
            return true;
        if(score==stu.score&&name<stu.name)
            return true;
        return false;
    }
    friend ostream& operator<<(ostream &,const Student&);
private:
    string name;
    int score;
};

ostream& operator<<(ostream& os,const Student &stu)
{
    os<<stu.score<<" "<<stu.name;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

