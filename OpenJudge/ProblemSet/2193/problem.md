# 学校的构成（I）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
学校是老师和学生组成的。现在定义Student、Teacher和School三个类来模拟一个学校。
Student类只有一个int类型的数据成员，表示学生的年级；Teacher类只有一个double类型的数据成员，表示该教师的工资；School类是由1个Student类的对象、1个Teacher类的对象组合而成。定义它们的构造函数和析构函数，使程序能产生样例所示的输出。

## Input
输入4行，第1行和第3行是2个int类型的正整数；第2行和第4行是double类型的正数。


## Output
见样例。

## Sample Input
```
3
1600.31
4
2451.34

```
## Sample Output
```
A student grade 3 is created.
A teacher with salary 1600.31 is created.
A school is created.
A student grade 4 is created.
A teacher with salary 2451.34 is created.
A student grade 4 is created.
A teacher with salary 2451.34 is created.
A school is created.
A school is erased.
A teacher with salary 2451.34 is erased.
A student grade 4 is erased.
A teacher with salary 2451.34 is erased.
A student grade 4 is erased.
A school is erased.
A teacher with salary 1600.31 is erased.
A student grade 3 is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int g;
    double s;
    cin>>g>>s;
    School sch(g, s);
    cin>>g;
    Student stu(g);
    cin>>s;
    Teacher tea(s);
    School(g, s);
    return 0;
}
```
