# 需要重载吗？
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类Overload，具有一个int类型的和一个char类型属性。在定义该类的对象时，如果不指定任何初始值，则输出：
Default constructor is called to make a = 0, c = '0'.
如果只给出一个int类型的初始值#，则输出：
First constructor is called to make a = #, c = '0'.
如果只给出一个char类型初始值$，则输出：
Second constructor is called to make a = 0, c = '$'.
如果给出一个int类型初始值#和一个char类型初始值$，则输出：
Third constructor is called to make a = #, c = '$'.

## Input
一个int类型的值和一个char类型的值。

## Output
见样例。

## Sample Input
```
10 a
```
## Sample Output
```
Default constructor is called to make a = 0, c = '0'.
First constructor is called to make a = 10, c = '0'.
Second constructor is called to make a = 0, c = 'a'.
Third constructor is called to make a = 10, c = 'a'.
```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int i;
    char ch;
    cin>>i>>ch;
    Overload t1, t2(i), t3(ch), t4(i, ch);
    return 0;
}
```
