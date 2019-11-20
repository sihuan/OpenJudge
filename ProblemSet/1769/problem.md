# The Hanoi Tower II
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
“Hanoi Tower”问题的背景和搬移规则大家都很熟悉了，可以使用递归算法来完成。这次我们来计算它的搬移次数。

n个盘子的Hanoi塔问题求解递归算法的盘子搬移次数T(n)，由以下递归方程给出；




-----------------------------------------------------------------------------

Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。

被禁用的关键字：循环语句for、while，甚至包括分支语句的switch、case、goto。
被禁用的头文件：match.h、stdlib.h。
被禁用的库函数：pow等。



## Input
输入为一个正整数n（n<=64），表示有n个盘子。



## Output
输出为一个整数T(n)，为n个盘子的Hanoi塔搬移次数。


## Sample Input
```
6
```
## Sample Output
```
63

```

## HINT
  梵塔问题出自古印度的数学故事。历史学家鲍尔在《数学拾零》一书中是这样讲述这段故事的：在世界中心贝拿勒斯的圣庙里，安放着一个黄铜板，板上插着三根宝石针。每根针高约20英寸。梵天在创造世界的时候，在其中一根针上从下到上放了由大到小的64块金片，这就是梵塔（见图1.1）。不论白天黑夜，都有一个值班的僧侣按照梵天不渝的法则，把这些金片在三根针上移来移去：一次只能移一片，金片只能放在三根针上，并且要求在每根针上，都不能出现大片在上小片在下的情况。当所有64片都从梵天创造世界时所放的那根针移到另外一根针上时，世界就将在一声霹雳中消灭，梵塔、庙宇和众生都将同归于尽。
这个故事听起来很可怕。只要那些值班的僧侣按照“梵天不渝”的法则把64块金片从一根针移到另一根针上，世界末日就会到来。那么，僧侣们完成梵塔的移动工作需要多少时间呢？

梵塔中共有64块金片，要把它们从一根针按“梵天不渝”的法则移到另一根针，即使僧侣们一次错误也不犯，也需移动264-1 = 18,446,744,073,709,511,615次。如果移动一块金片需要一秒钟，也要近58万亿年才能完成，根据宇宙进化论的推算，整个太阳系的寿命大约200亿年。可见，我们大可不必为梵塔故事的寓言而恐慌。