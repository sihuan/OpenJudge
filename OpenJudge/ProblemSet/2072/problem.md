# 建造一间教室
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
一间教室包括很多物品。这里只考虑灯（Light）和椅子（Chair）。定义Light类，只有一个int类型的参数，表示灯的瓦数；定义Chair类，只有一个字符串类型的参数，表示椅子的颜色。定义ClassRoom类，包括四个属性：两个int类型的属性，分别为灯的个数和椅子的个数。一个Light类的对象和一个Chair类的对象，分别为教室中灯的种类和椅子的种类。

## Input
输入有6行，第1行是一个正整数，表示灯的瓦数。第2行是一个不含空白符的字符串，表示椅子的颜色。第3、4行表示教室中灯的个数和椅子的数量。第5行是一个正整数，表示教室中灯的瓦数，第6行是一个不含空白符的字符串，表示教室中椅子的颜色。

## Output
见样例。

## Sample Input
```
20
blue
16
100
25
red

```
## Sample Output
```
A 20w light is created.
A blue chair is created.
A 25w light is created.
A red chair is created.
A classroom having 16 lights and 100 chairs is created.
A classroom having 16 lights and 100 chairs is erased.
A red chair is created.
A 25w light is erased.
A blue chair is created.
A 20w light is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int nl, nc;
    int w;
    string color;
    cin>>w>>color;
    Light light(w);
    Chair chair(color);
    cin>>nl>>nc;
    cin>>w>>color;
    ClassRoom room(nl, nc, w, color);
    return 0;
}
```
