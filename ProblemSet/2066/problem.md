# 学生比大小
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类Student，拥有属性age（int类型）和name（字符串），重载其大于、输出和输入运算符。大于运算符比较的规则是先比较年龄，年龄大的对象为大；如果年龄相同，则比较姓名，姓名大的对象为大。
编程用于求输入的若干个学生的最大者。

## Input
输入有若干行，每行包括一个字符串（无空白符）、一个整数，分别学生的姓名name和年龄age。

## Output
最大学生的信息。格式见样例。

## Sample Input
```
Tom 20
Jack 18
Tom 19
Jack 21

```
## Sample Output
```
Jack 21

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Student stu, max;
    while(cin>>stu)
    {
        if (stu > max)
            max = stu;
    }
    cout<<max<<endl;
    return 0;
}
```
