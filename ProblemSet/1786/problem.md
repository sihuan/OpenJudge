# 动物爱好者
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
某人是一个狂热的动物爱好者，豢养了大量的各种动物。现在请定义两个类：
1. Animal类：
（1）string name和int  num属性表示该种动物的名称和数量。
（2）无参构造函数。
（3）void setAnimal(string,int)方法，用于设置一个动物的相关属性。
（4）int getNum() const和string getName() const方法用于获得该动物的数量和名称。
（5）重载的赋值运算符=。
2. AnimalList类：
（1）Animal *animalList和int numOfAnimal属性，用于表示该人豢养的所有动物的列表以及动物的种类数。
（2）构造函数AnimalList(Animal *animals, int n)。
（3）重载的下标运算符[]，int operator[](string name)，用于返回参数name指定名称的动物的数量，当不存在这种动物时，返回-1。


## Input
第一行M>0表示有M种动物，之后有M行，每行第一个字符串表示动物名称，第二个整数是该种动物的数量。
之后一个N>0表示有N个测试用的动物名称，之后又有N行，每行是一个动物名。


## Output
输出共N行，格式见样例。


## Sample Input
```
5
Dog 5
Bird 10
Cat 11
Duck 1
Sparrow 66
6
Dog
Bird
Cat
Duck
Sparrow
Bull

```
## Sample Output
```
There are 5 Dogs.
There are 10 Birds.
There are 11 Cats.
There are 1 Ducks.
There are 66 Sparrows.
There is none Bull.

```

## HINT
注意：不能使用STL。

## Append Code
### append.cc
```cppint main()
{
    int cases;
    string name;
    int num;
    cin>>cases;
    Animal animals[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>num;
        animals[i].setAnimal(name, num);
    }
    AnimalList animalList(animals, cases);

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name;
        if (animalList[name] != -1)
            cout<<"There are "<<animalList[name]<<" "<<name<<"s."<<endl;
        else
            cout<<"There is none "<<name<<"."<<endl;
    }
    return 0;
}
```
