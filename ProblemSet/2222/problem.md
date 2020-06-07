# 一个人的生日
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Date类，表示由年、月、日构成的日期，定义其构造函数和析构函数，产生如样例所示的输出。
定义Person类，包括一个Date类的对象成员表示其生日，一个string的数据成员表示其名字。定义其构造函数和析构函数，产生如样例所示的输出。

## Input
第一行是一个合法的日期；第二行是一个无空白符的字符串和一个合法的日期。

## Output
见样例。

## Sample Input
```
1997 10 1
tom 1997 11 12
```
## Sample Output
```
Date 1997-10-1 is created.
Date 1997-11-12 is created.
Person tom was born at 1997-11-12 is created.
Person tom was born at 1997-11-12 is erased.
Date 1997-11-12 is erased.
Date 1997-10-1 is erased.
```

## HINT


## Append Code
### append.cc
```cppint main()
{
    string name;
    int year, month, day;
    cin>>year>>month>>day;
    Date date(year, month, day);
    cin>>name>>year>>month>>day;
    Person person(year, month, day, name);
    return 0;
}
```
