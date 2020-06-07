# 我们来做个Student类吧！
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
请定义一个Student类，有4个属性：
1.char *name：姓名。
2.int numOfScores：课程数量
3.int *scores：所有课程的成绩。
4.int id：学生的编号。
只有3个方法：
1. 构造函数
2.析构函数
3.void Student::showStudent()方法：用于输出学生的信息。
请根据样例输出，写出该类的实现。


## Input
输入分为多行。
第一行包含3个正整数M，N和P：其中M表明之后输入的测试用例数量；N表示每个人姓名的最大长度；P表示学生学习的课程的数量。
之后有M行，包含一个学生姓名（没有任何空白符）、P门课程的成绩。


## Output
见样例。
注意：所有的输出两两之间用一个空格隔开，且每行输出的首尾都没有空格。


## Sample Input
```
3 10 5
Tom 60 61 72 56 89
Jack 99 100 98 89 77
Mary 88 88 88 88 88

```
## Sample Output
```
A student whose name is "Tom" and id is 1 is created!
This student is "Tom" whose id is 1.
This student's scores are: 60 61 72 56 89
A student whose name is "Tom" and id is 1 is erased!
A student whose name is "Jack" and id is 2 is created!
This student is "Jack" whose id is 2.
This student's scores are: 99 100 98 89 77
A student whose name is "Jack" and id is 2 is erased!
A student whose name is "Mary" and id is 3 is created!
This student is "Mary" whose id is 3.
This student's scores are: 88 88 88 88 88
A student whose name is "Mary" and id is 3 is erased!

```

## HINT


## Append Code
### append.cc
```cppint main()
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
```
