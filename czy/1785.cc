#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int scores;
public:
//    friend istream &operator >> (istream &in, Array &p)
//    {
//        in >> p.length;
//       p.mems = new int[p.length+1];
//        for(int i=0; i<p.length; i++)
//            in >> p.mems[i];
//        return in;
//    }
    Student ():name(""),scores(0){}
    void setStudent (string q,int r)
    {
        name=q;
        scores=r;
    }

    friend ostream &operator << (ostream &out, Student &p)
    {
        out<<p.scores<<" "<<p.name;
        return out;
    }
    friend bool operator > (Student &p,Student  &q)
    {
        if(p.scores>q.scores) return true;
        else if(p.scores==q.scores && p.name<q.name) return true;
        else return false;

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

