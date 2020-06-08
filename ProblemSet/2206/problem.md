# 老师的工资
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
假设高中老师和大学老师的工资分别是这么计算的：
1.高中老师的工资是基本工资+奖金，其中奖金是升学的学生数乘以100。
2.大学老师的工资是基本工资+绩效。其中当教学的小时数不到240小时时，每少1个小时，扣20元；当小时数多于240小时时，每多1个小时，多发40元。
如：王老师是一个高中老师，他的基本工资是1000元，有5个学生成功升学，则其工资是1000+5*100=1500元。
刘老师是一个大学老师，基本工资是2000元，如果只完成了200小时的授课，则工资是2000-40*20=1200元；如果完成了250小时的授课，则工资是2000+10*40=2400元。
现在，定义Teacher、HighSchoolTeacher、UniversityTeacher的构造函数、析构函数、getSalary方法，使得main函数能正确执行并获得样例所示的结果。

## Input
输入有多行。
第1行N>0，表示后面有N个测试用例。
每个测试占1行，包括1个字符、1个double数和1个int数，均为正数。

## Output
见样例。

## Sample Input
```
4
h 2900.13 20
u 3911.23 210
u 3911.34 250
h 3911.15 10

```
## Sample Output
```
Teacher's constructor.
HighSchoolTeacher's constructor.
4900.13
HighSchoolTeacher's deconstructor.
Teacher's deconstructor.
Teacher's constructor.
UniversityTeacher's constructor.
3311.23
UniversityTeacher's deconstructor.
Teacher's deconstructor.
Teacher's constructor.
UniversityTeacher's constructor.
4311.34
UniversityTeacher's deconstructor.
Teacher's deconstructor.
Teacher's constructor.
HighSchoolTeacher's constructor.
4911.15
HighSchoolTeacher's deconstructor.
Teacher's deconstructor.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int N, i, m;
    char ch;
    double basis;
    Teacher *t;
    cin>>N;
    for (i = 0; i < N; i++)
    {
        cin>>ch>>basis>>m;
        if (ch == 'h')
            t = new HighSchoolTeacher(basis, m);
        else if (ch == 'u')
            t  = new UniversityTeacher(basis, m);
        cout<<setprecision(2)<<setiosflags(ios::fixed)<<t->getSalary()<<endl;
        delete t;
    }
    return 0;
}
```
