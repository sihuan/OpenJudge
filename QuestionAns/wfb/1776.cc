#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>

using namespace std;

class Student {
private:
    char* name;
    int numOfScores;
    int *scores;
    int id;
public:
    static int cnt;
    Student(char *n,int *s,int n1){
        name = n;
        scores = s;
        numOfScores = n1;
        ++cnt;
        id = cnt;
        cout<<"A student whose name is \""<<
        name<<"\" and id is "<<
        id<<" is created!"<<endl;
    }
    ~Student() {
        cout<<"A student whose name is \""<<
        name<<"\" and id is "<<
        id<<" is erased!"<<endl;
    }
    void showStudent() const {
        cout<<"This student is \""<<
        name<<"\" whose id is "<<id<<"."<<endl;
        cout<<"This student's scores are:";
         for(int i=0; i<numOfScores; ++i)
            cout<<" "<<scores[i];
         cout<<endl;
    }
};
int Student::cnt = 0;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

