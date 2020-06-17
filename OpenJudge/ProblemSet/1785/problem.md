# 成绩排序
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Student类：
1. 数据成员string name和int score表示一个学生的姓名、成绩。
2. 无参构造函数。
3. void setStudent(string,int)方法，用于设置一个学生的属性值。
4. 重载>（大于运算符）。Student类的对象A和B的大小关系，A>B定义为A.score>B.score，或者A.score=B.score但A.name<B.name。
5.重载运算符<<用于输出学生信息：先输出成绩再输出姓名，中间用一个空格隔开。


## Input
分多行。第一个M>0表示有M个学生信息。
之后有M行，每一行是一个学生信息。第一部分是学生姓名，第二部分是学生成绩。


## Output
输出为M行，按照从大到小的顺序依次输出每个学生的成绩、姓名。假定不存在重名的学生。


## Sample Input
```
5
Tom 98
Jack 97
Mary 98
Sherry 99
Dock 97

```
## Sample Output
```
99 Sherry
98 Mary
98 Tom
97 Dock
97 Jack

```

## HINT
string类有个方法：int compare(const string &s) const;用于比较当前字符串和s的大小，其原理等同于C语言的库函数strcmp。


## Append Code
### append.cc
```cppint main()
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
```
