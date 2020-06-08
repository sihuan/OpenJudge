# tones Game
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
The stones game is a simple game, it is also a very old game which is unknown to almost everyone.
The game starts with N stones and M players, the players are numbered from 1 to M. The players play in turns, player number 1 plays first, then player number 2 and so on until player number M plays, after this player number 1 plays again and they keep playing until the end of the game.
For each turn, the players do the following 2 steps:
1. The player gets a chance to remove a stone, and he/she should remove a stone in this step if he/she decided to do so.
2. Regardless of the decision of the current player (whether or not he/she removed a stone in the first step), if this is not the first turn and in the previous turn the player decided not to remove a stone in his/her first step, then the current player must remove a stone in this step (if in the previous turn the player decided to remove a stone in his/her first step, then the current player must not remove a stone in this step).
This means in some turns a player might remove 0, 1 or 2 stones according to the above rules. In this game, the player who removes the last stone wins the game.
Now you are given the total number of stones, the total number of players and a player number and you are asked to answer the following question:
Is there a strategy for this player to win the game regardless of the actions taken by the other players in their turns?


## Input
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1<=T<=100). Followed by the test cases, each test case is described in one line which contains 3 integers separated by a single space N M X (1<=N, M<=10^9) and (1<=X<=M) representing the number of stones, the number of players and the player number, respectively.


## Output
For each test case, print a single line which contains a single word, this word is either "YES" or "NO" (without the quotes) representing the answer for the above question for the given player number.


## Sample Input
```
2
2 2 2
2 2 1

```
## Sample Output
```
YES
NO

```

## HINT


## Append Code
