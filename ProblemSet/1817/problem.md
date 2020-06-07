# 字符的变化
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Character类，具有：
1. char类型的数据成员。
2.构造函数Character(char)。
3. Character toUpper()：如果当前字符是英文小写字母时，则变为相应的大写字母；否则保持当前字符不变。注意：不要改变当前对象的属性值。
4. Character toLower()：如果当前字符是英文大写字母时，则变为相应的小写字母；否则保持当前字符不变。注意：不要改变当前对象的属性值。
5. void show()：显示当前字符，不输出换行。


## Input
第1行N>0表示有N个测试用例。
每个测试用例只有1个字符。


## Output
见样例。


## Sample Input
```
3
a
A
1

```
## Sample Output
```
char upper lower
a    A     a
A    A     a
1    1     1

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases;
    char c;
    cin>>cases;
    cout<<"char"<<" upper"<<" lower"<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>c;
        Character character(c);
        character.show();
        cout<<"    ";
        character.toUpper().show();
        cout<<"     ";
        character.toLower().show();
        cout<<endl;
    }
}
```
