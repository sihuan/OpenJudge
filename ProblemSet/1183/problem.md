# Tower
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
A dice is a cube, its faces contain distinct integers from 1 to 6 as black points. The sum of numbers at the opposite dice faces always equals 7. Please note that there are only two dice (these dices are mirror of each other) that satisfy the given constraints (both of them are shown on the picture on the left).

Alice and Bob play dice. Alice has built a tower from n dice. We know that in this tower the adjacent dice contact with faces with distinct numbers. Bob wants to uniquely identify the numbers written on the faces of all dice, from which the tower is built. Unfortunately, Bob is looking at the tower from the face, and so he does not see all the numbers on the faces. Bob sees the number on the top of the tower and the numbers on the two adjacent sides (on the right side of the picture shown what Bob sees).
Help Bob, tell whether it is possible to uniquely identify the numbers on the faces of all the dice in the tower, or not.


## Input
The first line contains a single integer n (1≤n≤100) — the number of dice in the tower.
The second line contains an integer x (1≤x≤6) — the number Bob sees at the top of the tower. Next n lines contain two space-separated integers each: the i-th line contains numbers ai,bi (1≤ai,bi≤6; ai≠bi) — the numbers Bob sees on the two sidelong faces of the i-th dice in the tower.
Consider the dice in the tower indexed from top to bottom from 1 to n. That is, the topmost dice has index 1 (the dice whose top face Bob can see). It is guaranteed that it is possible to make a dice tower that will look as described in the input.
There are a lof of cases,please use EOF to end;


## Output
Print "YES" (without the quotes), if it is possible to to uniquely identify the numbers on the faces of all the dice in the tower. If it is impossible, print "NO" (without the quotes).


## Sample Input
```
3
6
3 2
5 4
2 4

3
3
2 6
4 1
5 3

```
## Sample Output
```
YES
NO

```

## HINT


## Append Code
Source