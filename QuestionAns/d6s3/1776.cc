#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name_;
    int noc_;
    int* scores_;
    int id_;
    static int cnt;
    void showscores()
    {
        for (int i = 0; i < noc_; i++)
            cout << " " << scores_[i];
    }

public:
    Student(string st, int* sc, int nc)
        : name_(st)
        , scores_(sc)
        , noc_(nc)
        , id_(cnt)
    {
        cout << "A student whose name is \"" << name_ << "\" and id is " << id_ << " is created!" << endl;
        cnt++;
    }
    ~Student()
    {
        cout << "A student whose name is \"" << name_ << "\" and id is " << id_ << " is erased!" << endl;
    }
    void showStudent()
    {
        cout << "This student is \"" << name_ << "\" whose id is " << id_ << "." << endl;
        cout << "This student's scores are:";
        showscores();
        cout << endl;
    }
};
int Student::cnt = 1;
int main()
{
    int cases;
    char *str;
    int maxLenOfString, numOfCourses;
    int *scores;

    cin>>cases>>maxLenOfString>>numOfCourses;
    str = new char[maxLenOfString + 1];
    scores = new int[numOfCourses];
    for (int i = 0; i < cases; i++)
    {
        cin>>str;
        for (int j = 0; j < numOfCourses; j++)
            cin>>scores[j];
        Student stu(str,scores,numOfCourses);
        stu.showStudent();
    }
    return 0;
}
/**************************************************************
	Problem: 1776
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

