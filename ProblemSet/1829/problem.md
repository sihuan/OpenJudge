# 新奇的加法运算
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义类newInt，包括：
1. int类型的数据成员。
2. 重载运算符“+”。计算规则为：将A、B对应位置上的数字相加，只保留个位数作为结果的对应位置上的数字。比如：876 + 543 = 319。注意：该运算不改变两个操作数的值。
3. 重载输入和输出运算符，用于输入和输出对象的属性值。
4. 无参构造函数和带参构造函数。


## Input
第1行N>0，表示测试用例数量。
每个测试用例包括2个非负整数，用空格隔开。

## Output
见样例。



## Sample Input
```
4
876 543
999 9999
9 1999
199 88

```
## Sample Output
```
876 + 543 = 319
999 + 9999 = 9888
9 + 1999 = 1998
199 + 88 = 177

```

## HINT
 不能使用string、char等字符或字符串类型。

## Append Code
### append.cc
```cppint main()
{
    int cases;
    newInt a, b, c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>a>>b;
        c = a + b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
```
