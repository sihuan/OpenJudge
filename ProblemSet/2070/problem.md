# 大学的组织架构
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
一个大学是由若干个学院、系组成的，每个学院、系有自己的名称和领导。定义Orgnization类，具有2个string属性，分别是一个组织的名称和其领导的名字；具有一个show方法，用于显示该组织的信息。
该类有2个子类：College、Department。其中College的show方法显示格式为：
Dean of $ is &
Department的show方法显示格式为：
Director of $ is &
上述格式中，$表示College或Department的名字，&是相应的领导的名字。


## Input
输入多行。
第1行N表示一个大学的下属机构的个数。
之后有N组输入。每组输入有3行，第1行是0或1,0表示这是一个College，1表示这是一个Department。
第2行是College或Department的名字。
第3行是相应的领导名字。

## Output
见样例。

## Sample Input
```
4
0
College of Information
Tom Zhang
1
Department of Software
Jack Li
0
College of Math
Mary Wang
1
Department of Computer
Fu Qi


```
## Sample Output
```
Dean of College of Information is Tom Zhang
Director of Department of Software is Jack Li
Dean of College of Math is Mary Wang
Director of Department of Computer is Fu Qi

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    vector<Orgnization*> university;
    vector<Orgnization*>::iterator itr;
    int n, i, t;
    string str1, str2;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>t;
        cin.ignore();
        getline(cin, str1);
        getline(cin, str2);
        if (t == 0)
            university.push_back(new College(str1, str2));
        else
            university.push_back(new Department(str1, str2));
    }
    for (itr = university.begin(); itr != university.end(); itr++)
        (*itr)->show();
    return 0;
}

```
