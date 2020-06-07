# 字符的变化
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义类Char，包括：
1.一个char类型的属性，是一个字符。
2.char change()：如果属性值是小写字母，则返回对应的大写字母；如果属性值是大写字母，则返回对应的小写字母；其他情况下返回原字符。



## Input

输入有多行，每行一个字符。



## Output
每行输入对应一行输出，是输入的字符变化之后的结果。



## Sample Input
```
A
b
1

```
## Sample Output
```
a
B
1

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    char ch;
    while(cin>>ch)
    {
        Char c(ch);
        cout<<c.change()<<endl;
    }
    return 0;
}

```
