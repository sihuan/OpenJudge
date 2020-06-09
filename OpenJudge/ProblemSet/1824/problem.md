# Person类与Student类的关系
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
当然，一个student首先是一个person。所以，Student类是Person类的派生类。请定义Person类，包括：
1. 数据成员string name和int age，分别表示姓名和年龄。
2. 构造函数和析构函数，它们有相应的输出，见样例。
3. void show()函数：按照样例输出该对象的name和age属性值。
定义Student类，是Person类的子类：
1. 数据成员int grade，表示学生所在年级。
2. 构造函数和析构函数，它们有相应的输出，见样例。
3. void show()函数：按照样例输出该对象的grade属性值。


## Input
只有1行，分为三部分：一个不含空白符的字符串以及两个整数。


## Output
见样例。


## Sample Input
```
Tom 19 3

```
## Sample Output
```
A person Tom whose age is 19 is created.
A student whose grade is 3 is created.
Name is Tom and age is 19.
Grade is 3.
A student whose grade is 3 is erased.
A person Tom whose age is 19 is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    string n;
    int a, g;
    cin>>n>>a>>g;
    Student student(n, a, g);
    student.Person::show();
    student.show();
    return 0;
}
```
