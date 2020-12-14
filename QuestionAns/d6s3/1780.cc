#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name_;
    bool sex_;
    int grade_;
    Student* next_;

public:
    Student(string n, bool s, int g)
        : name_(n)
        , sex_(s)
        , grade_(g)
        , next_(NULL)
    {
        cout << "A student named by " << name_ << " is created!" << endl;
    }
    ~Student()
    {
        cout << "A student named by " << name_ << " is erased." << endl;
    }
    void showInfo()
    {
        cout << "name = " << name_ << ", sex = " << sex_ << ", grade = " << grade_ << ";";
    }
    Student* getNext()
    {
        return next_;
    }
    void setNext(Student* n)
    {
        next_ = n;
    }
};

class StudentCadre : public Student {
private:
    string position_;

public:
    StudentCadre(string n, bool s, int g, string p)
        : Student(n, s, g)
        , position_(p)
    {
        cout << "A student cadre with position " << p << " is created." << endl;
    }
    ~StudentCadre() {}
    void showInfo()
    {
        Student::showInfo();
        cout << " position = " << position_ << ".";
    }
};
int main()
{
    int num;
    string name, position;
    bool sex;
    int grade;
    Student *header, *student, *curStudent;

    cin>>name>>sex>>grade>>position;
    header = new StudentCadre(name, sex, grade,position);
    curStudent = header;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin>>name>>sex>>grade;
        student = new Student(name, sex, grade);
        curStudent -> setNext(student);
        curStudent = curStudent -> getNext();
    }
    ((StudentCadre*)header) -> showInfo();
    cout<<endl;
    curStudent = header;
    while (curStudent -> getNext() != NULL)
    {
        curStudent = curStudent -> getNext();
        curStudent->showInfo();
        cout<<endl;
    }

    curStudent = header;
    while (curStudent != NULL)
    {
        student = curStudent;
        curStudent = curStudent -> getNext();
        delete student;
    }
    return 0;
}
/**************************************************************
	Problem: 1780
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

