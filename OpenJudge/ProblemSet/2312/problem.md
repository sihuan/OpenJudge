# Peach 
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，店里开展了新业务：榨果汁和水果沙拉。他发现桃子（Peach）不论是榨果汁还是水果沙拉都很受欢迎。除了桃子（Peach）还有3种水果苹果（Apple）、菠萝（Pineapple）、香蕉（Banana）也进入了新业务。
这4种水果（Fruit）被分成了三个种类：榨汁（Juice）类、沙拉（Salad）类、能榨汁也能做沙拉（JuiceSalad）类。其中，菠萝只能榨汁、香蕉只能做沙拉、桃子和苹果是既能榨汁也能做沙拉。
所有的水果都有属性重量（weight）。
能榨汁的水果具有属性榨汁率（juice_ratio）。
能做沙拉的水果也有个属性是做成沙拉后保存率（salad_ratio）。
既能榨汁又能做沙拉的水果，会把60%用来榨果汁、40%用来做沙拉，因此具有juice_ratio和salad_ratio两个属性。
现在有水果的进货数据，请你编写程序计算水果总量、榨汁总量和沙拉总量。
用C++编写Peach类、Apple类、Banana类、Pineapple类和它们的继承关系来完成代码，调用格式见“Append Code”。
Fruit::weight()水果的重量。
juice_weight()和salad_weight()分别用来计算水果榨汁的重量和做成沙拉的重量，都是多态函数。
各类的构造根据给出的调用代码完成。


## Input
         第一行输入整数k，表示后面有k个记录。每个记录水果的名称、重量、榨汁率和做成沙拉后的保存率，只能榨汁或只能做沙拉的水果仅有一个能用的比例。


## Output
         输出这些水果的总重量、榨汁的总量和做成沙拉的总量。


## Sample Input
```
4
Peach 100 0.67 0.55
Pineapple 50 0.5
Banana 80 0.88
Apple 200 0.4 0.6

```
## Sample Output
```
All fruits weight 430 kg.
These fruits can juicing 113.2 kg fruit juice.
These fruits can making 140.4 kg fruit salad.

```

## HINT


## Append Code
### append.c
```c
int main()
{
    Fruit* fruit[100];
    Juice* juice[100];
    Salad* salad[100];

    string name;
    int cases, f, j, s;
    f = j = s = 0;
    cin >> cases;
    while(cases--)
    {
        cin >> name;
        double weight, s_ratio, j_ratio;
        if(name == "Peach")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Peach* p = new Peach(weight, j_ratio, s_ratio);
            fruit[f++] = p;
            juice[j++] = p;
            salad[s++] = p;
        }
        if(name == "Pineapple")
        {
            cin >> weight >> j_ratio;
            Pineapple* p = new Pineapple(weight, j_ratio);
            fruit[f++] = p;
            juice[j++] = p;
        }
        if(name == "Banana")
        {
            cin >> weight >> s_ratio;
            Banana* b = new Banana(weight, s_ratio);
            fruit[f++] = b;
            salad[s++] = b;
        }
        if(name == "Apple")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Apple* a = new Apple(weight, j_ratio, s_ratio);
            fruit[f++] = a;
            juice[j++] = a;
            salad[s++] = a;
        }
    }

    double fruit_weight, salad_weight, juice_weight;
    fruit_weight = salad_weight = juice_weight = 0;
    for(int i = 0; i < f; i++)
        fruit_weight += fruit[i]->weight();
    cout << "All fruits weight " << fruit_weight << " kg." << endl;
    for(int i = 0; i < j; i++)
        juice_weight += juice[i]->juice_weight();
    cout << "These fruits can juicing " << juice_weight << " kg fruit juice." << endl;
    for(int i = 0; i < s; i++)
        salad_weight += salad[i]->salad_weight();
    cout << "These fruits can making " << salad_weight << " kg fruit salad." << endl;
}

```
### append.cc
```cpp
int main()
{
    Fruit* fruit[100];
    Juice* juice[100];
    Salad* salad[100];

    string name;
    int cases, f, j, s;
    f = j = s = 0;
    cin >> cases;
    while(cases--)
    {
        cin >> name;
        double weight, s_ratio, j_ratio;
        if(name == "Peach")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Peach* p = new Peach(weight, j_ratio, s_ratio);
            fruit[f++] = p;
            juice[j++] = p;
            salad[s++] = p;
        }
        if(name == "Pineapple")
        {
            cin >> weight >> j_ratio;
            Pineapple* p = new Pineapple(weight, j_ratio);
            fruit[f++] = p;
            juice[j++] = p;
        }
        if(name == "Banana")
        {
            cin >> weight >> s_ratio;
            Banana* b = new Banana(weight, s_ratio);
            fruit[f++] = b;
            salad[s++] = b;
        }
        if(name == "Apple")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Apple* a = new Apple(weight, j_ratio, s_ratio);
            fruit[f++] = a;
            juice[j++] = a;
            salad[s++] = a;
        }
    }

    double fruit_weight, salad_weight, juice_weight;
    fruit_weight = salad_weight = juice_weight = 0;
    for(int i = 0; i < f; i++)
        fruit_weight += fruit[i]->weight();
    cout << "All fruits weight " << fruit_weight << " kg." << endl;
    for(int i = 0; i < j; i++)
        juice_weight += juice[i]->juice_weight();
    cout << "These fruits can juicing " << juice_weight << " kg fruit juice." << endl;
    for(int i = 0; i < s; i++)
        salad_weight += salad[i]->salad_weight();
    cout << "These fruits can making " << salad_weight << " kg fruit salad." << endl;
}

```
