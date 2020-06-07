# 选举班干部了！
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
新学期伊始，某班要通过竞争上岗方式竞选班干部。包括班长、团支书等。现在需要你来设计2个类Student和StudentCadre来模拟这一过程。
1.Student类是学生类，包括
（1）属性：string name——姓名。bool sex——性别。int grade——年级。Student *next——指向下一个学生指针。
（2）方法：

    构造函数Student(string _name, bool _sex, int _grade)——初始化一个对象。注意：其中的next初始化为NULL。
    析构函数。
    void showInfo()——输出一个学生的信息。next除外。
    Student* getNext()——获得next指针。
    void setNext(Student*)——设置next指针指向对象。

2. StudentCadre类是Student类的派生类，包括：
（1）属性：string position——表示竞聘岗位。
（2）方法：

    StudentCadre(string _name, bool _sex, int _grade, string pos)——构造函数，初始化各种属性。
    析构函数。
    void showInfo()——显示信息。

构造函数和析构函数都有输出，具体见样例。


## Input
输入有多行。
第1行有4部分：姓名、性别（0或1）、年级（整数）和岗位。
第2行是一个正整数N，表示有N个学生支持该人竞聘相应岗位。之后有N行，每行有3个部分，分别是一个学生的姓名、性别和年级。


## Output
见样例。

## Sample Input
```
Tom 0 2015 Monitor
3
Jack 1 2015
Mary 0 2015
Sherry 1 2015

```
## Sample Output
```
A student named by Tom is created!
A student cadre with position Monitor is created.
A student named by Jack is created!
A student named by Mary is created!
A student named by Sherry is created!
name = Tom, sex = 0, grade = 2015; position = Monitor.
name = Jack, sex = 1, grade = 2015;
name = Mary, sex = 0, grade = 2015;
name = Sherry, sex = 1, grade = 2015;
A student named by Tom is erased.
A student named by Jack is erased.
A student named by Mary is erased.
A student named by Sherry is erased.

```

## HINT
string类是C++提供的类，在头文件string中，可以用#include <string>来使用这个类。该类的对象可以直接利用赋值运算符（=）进行复制，也可以直接利用cout输出，或利用cin输入。


## Append Code
### append.cc
```cppint main()
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
```
