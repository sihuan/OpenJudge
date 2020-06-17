# 类模板Sample
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义类模板Sample，设模板参数为T，则Sample类只有一个T类型的属性。定义其构造函数、拷贝构造函数，输出与样例类似的信息。定义show函数，用于显示属性值（只输出属性值）。定义add函数，将当前对象与Sample类的另一个对象的属性值相加，和仍存入当前对象。

## Input
输入2个int类型整数、2个double类型实数。

## Output
见样例。

## Sample Input
```
1
2
1.6
3.356

```
## Sample Output
```
Sample 1 is created.
Sample 2 is created.
Sample 1 is copied.
Sample 1.6 is created.
Sample 3.356 is created.
Sample 3.356 is copied.
Sample 2 is copied.
3
Sample 1.6 is copied.
4.956

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int a, b;
    double c, d;
    cin>>a>>b>>c>>d;
    Sample<int> s1(a), s2(b), s3(s1);
    Sample<double> s4(c), s5(d), s6(s5);
    s1.add(s2);
    s1.show();
    s5.add(s4);
    s5.show();
    return 0;
}
```
