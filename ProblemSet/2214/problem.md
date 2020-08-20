# 玩家PK
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
在很多游戏中，两个玩家进行PK（Player Killing，游戏中玩家相互战斗的模式）是判断自己战力的重要方法。这里简化一下。定义一个类Role来表示游戏玩家。具有4个非负整数属性：血量（hp）、攻击力（ce）、防御力（de）和先攻值（fa），以及一个代表玩家昵称的string属性name。
PK采用回合制。假设有两个玩家A和B，当A与B进行PK时，先攻值高的一方首先发动攻击。如A的先攻值大于B，那么第一回合中，A首先攻击B，B防御；接着，如果B没有死亡，则攻击A，A处于防御状态。如果A没有死亡，则进入第二回合。一直重复进行下去，直到一方死亡为止。
当一方被攻击时，其血量变化遵循如下规则：（1）如果其防御力不小于攻击方的攻击力，那么其血量减少1。（2）如果其防御力小于攻击方的攻击力，那么其血量减少（对方的攻击力-自己的防御力）。同时，每一方被攻击一次，其防御力减少1。
比如：当A攻击B时，如果A的攻击力为10，B的防御力为4，则B的血量减少6，防御力减少1。如果A的攻击力为10，B的防御力大于等于10，则B的血量和防御力都减少1。
在Role中，定义两个方法：
（1）Role(string n, int h, int c, int d, int f)：依次初始化昵称、血量、攻击力、防御力和先攻值。两个玩家的先攻值不同。
（2）void combat(Role &another)：根据PK规则展示PK过程。假设PK的两个玩家分别是A和B，当A攻击B时，显示：
A attacks B:B hp=#,de=$
其中#和$分别是B被攻击后的剩余血量和防御力。当剩余血量小于0时，也显示为0，不能显示负数。
当B攻击A时，显示：
B attacks A:A hp=%,de=&
其中%和&分别是A被攻击后的剩余血量和防御力。当剩余血量小于0时，也显示为0，不能显示负数。
最后，当A的血量为0时，输出：
B wins.
当B的血量为0时，输出：
A wins.

## Input
有两行，每行包括1个字符串（玩家昵称）、4个正整数（对应玩家的血量、攻击力、防御力和先攻值。

## Output
如前所述，见样例。

## Sample Input
```
A 30 10 4 1
B 10 2 20 2
```
## Sample Output
```
B attacks A:A hp=29,de=3
A attacks B:B hp=9,de=19
B attacks A:A hp=28,de=2
A attacks B:B hp=8,de=18
B attacks A:A hp=27,de=1
A attacks B:B hp=7,de=17
B attacks A:A hp=26,de=0
A attacks B:B hp=6,de=16
B attacks A:A hp=24,de=0
A attacks B:B hp=5,de=15
B attacks A:A hp=22,de=0
A attacks B:B hp=4,de=14
B attacks A:A hp=20,de=0
A attacks B:B hp=3,de=13
B attacks A:A hp=18,de=0
A attacks B:B hp=2,de=12
B attacks A:A hp=16,de=0
A attacks B:B hp=1,de=11
B attacks A:A hp=14,de=0
A attacks B:B hp=0,de=10
A wins.
```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int a, b, c, d;
    string name;
    cin>>name>>a>>b>>c>>d;
    Role one(name, a, b, c, d);
    cin>>name>>a>>b>>c>>d;
    Role two(name, a, b, c, d);
    one.combat(two);
    return 0;
}
```
