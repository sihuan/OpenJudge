# 让动物们叫起来吧！
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Tom家里养了很多动物，比如有鸭子、火鸡和公鸡。它们的叫声都不相同。现在，请编写类Animal、Cock、Turkey和Duck，根据给出的main()函数及样例分析每个类的属性、行为及相互关系，以模仿Tom家的情况。
提示：动物们都有自己的名字。


## Input
输入有多行。第一行正整数M表示之后有M个测试用例，每个测试用例包括2部分：前一部分是动物的名字，后一部分是动物的类型（用A、B、C分别表示鸭子、火鸡和公鸡）。


## Output
输出有M行，每个测试用例对应一样。见样例。


## Sample Input
```
3
Baby C
Rubby B
Tobby A

```
## Sample Output
```
Baby is a cock, and it can crow.
Rubby is a turkey, and it can gobble.
Tobby is a duck, and it can quack.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases;
    string name;
    char type;
    Animal *animal;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
       cin>>name>>type;
       switch(type)
       {
        case 'A':
            animal = new Duck(name);
            break;
        case 'B':
            animal = new Turkey(name);
            break;
        case 'C':
            animal = new Cock(name);
            break;
       }
       animal->sound();
    }
    return 0;
}
```
