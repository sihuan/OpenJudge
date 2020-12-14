#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
int rec=0;
class Student
{
private:
    char *name;
    int numOfScores;
    int *scores;
    int id;
public:
    Student(char *ch,int *a,int b):name(ch),scores(a),numOfScores(b)
    {
        rec++;
        id=rec;
        cout << "A student whose name is \"" << name << "\" and id is " << id << " is created!" << endl;
    }
    ~Student()
    {
        cout << "A student whose name is \"" << name <<"\" and id is " << id << " is erased!" << endl;
    }
    void showStudent()
    {
        cout << "This student is \"" << name << "\" whose id is " << id << "." << endl;
        cout << "This student's scores are:";
        for(int i=0;i<numOfScores;i++)
            cout << " " << scores[i];
        cout << endl;
    }
};
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

