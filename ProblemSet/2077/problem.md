# 动物要吃饭
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Animal类，只有一个纯虚函数eat。
定义Dog、Cat、Sheep、Chicken四个类，它们都是Animal的子类。
每个类重载eat方法，每个方法输出的内容见样例。

## Input
一系列0~3之内的整数。

## Output
每个输入对应一行输出，0、1、2、3分别代表Dog、Cat、Sheep、Chicken。

## Sample Input
```
0
1
2
3
2
3
1
0

```
## Sample Output
```
Dog eats bone.
Cat eats fish.
Sheep eats grass.
Chicken eats worm.
Sheep eats grass.
Chicken eats worm.
Cat eats fish.
Dog eats bone.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int c;
    vector<Animal*> animals;
    vector<Animal*>::iterator itr;
    while(cin>>c)
    {
        switch(c)
        {
        case 0 :
            animals.push_back(new Dog());
            break;
        case 1:
            animals.push_back(new Cat());
            break;
        case 2:
            animals.push_back(new Sheep());
            break;
        case 3:
            animals.push_back(new Chicken());
        }
    }
    for (itr = animals.begin(); itr != animals.end(); itr++)
        (*itr)->eat();
    return 0;
}
```
