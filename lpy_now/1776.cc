#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Student{
	private:
		char *name;
		int numOfScores;
		int *scores;
		static int id;
	public:
		Student(char *n, int *c, int i) : name(n), scores(c), numOfScores(i){
			++ id;
			cout << "A student whose name is \"" << name << "\" and id is " << id << " is created!\n";
		}
		~Student(){
			cout << "A student whose name is \"" << name << "\" and id is " << id << " is erased!\n";
		}
		void showStudent(){
			cout << "This student is \"" << name << "\" whose id is " << id << ".\n";
			cout << "This student's scores are:";
			for(int i = 0; i < numOfScores; ++ i){
				cout << " " << scores[i];
			}
			cout << "\n";
		}
};
int Student :: id = 0;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

