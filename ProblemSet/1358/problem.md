# STL——呵呵型自动机
Time Limit: 8 Sec  Memory Limit: 128 MB


## Description
xiaofei最近研发了一个呵呵型自动机，该自动机能够同时处理n个队列。其中，队列的编号为1..n。给定m个操作，模拟该自动机的工作状态。
第一行有2个整数n,m（1≤n, m≤10,000），表示自动机能处理n个队列，接下来m行每行一条操作指令。
每条指令的格式如下： 

    
        
            
            指令
            
            
            指令说明
            
        
        
            
            INIT
            
            
            将自动机初始化，此时所有的队列清空。
            
        
        
            
            PUSH id val   t
            
            
            把t个整数val加入到编号id的队列的尾部。
            
        
        
            
            POP id  t
            
            
            输出并删除编号id的队列的前t个队首元素，如果队列为空，则输出“NULL”。
            
        
    

 
在每条指令中，id的编号在1..n中，val的取值范围为-231~231。输入数据保证操作的第一条指令都是是INIT。


## Input
本题有多组输入数据，你必须处理到EOF为止。


## Output
请对输入数据中每条POP指令的结果依次输出一行结果。


## Sample Input
```
3 12 
INIT 
PUSH 1 100 1
POP 2 1
PUSH 3 300 1
PUSH 1 200 1
PUSH 2 -5 1
POP 2 1
PUSH 2 -10 1
POP 1 1
INIT 
PUSH 1 7 1
POP 1  1

```
## Sample Output
```
NULL
-5
100
7

```

## HINT
用STL的queue容易解决
