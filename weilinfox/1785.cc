#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#define ll long long

using namespace std;

class Student {
        string name;
        int sc;
public:
        Student():name(""),sc(0) {}
        void setStudent(string str, int s) {
                name = str;
                sc = s;
        }
        bool operator> (Student& s) {
                if (this->sc != s.sc) return this->sc > s.sc;
                else return this->name<s.name;
        }
        friend ostream& operator << (ostream& os, Student& s) {
                os << s.sc << ' ' << s.name;
                return os;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

