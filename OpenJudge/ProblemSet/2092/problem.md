# 老师与学生
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Person类，
1.有一个int类型属性age和1个char类型属性sex，分别为年龄和姓名。
2.构造函数和析构函数，输出如样例所示的信息。
定义Student类，是Person类的子类：
1.有一个int类型属性，是学生所在的班级号。
2.构造函数与析构函数，输出如样例所示的信息。
定义Teacher类，是Person类的子类：
1.有一个int类型属性，表示老师的工资。
2.构造函数与析构函数，输出如样例所示的信息。



## Input
输入有多行，每行是一个测试用例。每行的第1个是一个正整数，是年龄；第2个是一个字符，表示性别；第3个是一个字符t或s，表示老师或学生；第4个是一个正整数，表示班号（对于学生）或工资（对于老师）。



## Output
见样例。


## Sample Input
```
18 f s 1
35 m t 8001

```
## Sample Output
```
Person age = 18, sex = f is created.
Student of class 1 is created.
Student of class 1 is erased.
Person age = 18, sex = f is erased.
Person age = 35, sex = m is created.
Teacher with salary 8001 is created.
Teacher with salary 8001 is erased.
Person age = 35, sex = m is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Person *p;
    int age, par;
    char sex, t;
    while (cin>>age>>sex>>t>>par)
    {
        if (t == 's')
        {
            p = new Student(age, sex, par);
        }
        else
        {
            p = new Teacher(age, sex, par);
        }
        delete p;
    }

}

```
