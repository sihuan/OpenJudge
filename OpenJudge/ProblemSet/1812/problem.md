# 重载字符的加减法
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个字符类Character，只有一个char类型的数据成员。
重载它的+、-、<<和>>运算符，其中+、-的第二个操作数是int类型的整数n。“+”用于返回以当前字符之后的第n个字符为属性值的对象，“-”用于返回当前字符之前的第n个字符为属性值的对象。如样例所示。


## Input
第1行N>0表示测试用例个数。
每个测试用包括1个字符（小写英文字母）和1个int类型的整数。


## Output
输出有N行，每行输入对应一行输出，每行输出包括对应输入字符之后的第n个字符，以及该字符之前的第n个字符。如样例中第2个用例输入字符是“a”，整数是“1”，那么“a”之后的第1个字符是”b“，"a"之前的第1个字符是”z“；注意：输入的整数可能是负数。


## Sample Input
```
3
a 0
a 1
a -1

```
## Sample Output
```
a a
b z
z b

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases, data;
    Character ch;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>data;
        cout<<(ch + data)<<" "<<(ch - data)<<endl;
    }
}
```
