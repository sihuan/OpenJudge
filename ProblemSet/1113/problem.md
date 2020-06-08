#  tale
Time Limit: 1 Sec  Memory Limit: 64 MB


## Description

It is said that in a school’s underground, there is a huge treasure which can meet any desire of the owner.
The Spy Union (SU) is very interest in this legend. After much investigation, SU finally get the answer and let the youngest spy sneak into the school. That’s why Saya is now here.
Today, Saya found the entrance eventually.
She enters the entrance, and found her in a fairy-tale world.
“Welcome!” says a fairy, “I am Ivan. My responsibility is to protect the treasure, and give it to the one who have the ability to own it.”
Then Ivan gives Saya three problems.
With your help, Saya finished the first and the second problem (Problem H and I). Here comes the third. If Saya can solve this problem, the treasure belongs to her.
There is a big maze protecting the treasure. You can assume the maze as an N*N matrix while each element in the matrix might be N (North), S (South), W (West) or E (East). At first, Saya is at the element (1, 1) – the north-west corner, and the treasure is at (N, N) – the south-east corner.
The designer have enchant to this matrix, so that the treasure might move from time to time respecting the following rules:
Suppose the treasure is in an element which marked with E. The treasure might eastward move a cell after a unit time. It is similar to S, W and N.
After a unit time, all the mark will change: E to W, W to S, S to N, and N to E. In another word, suppose an element which marked with E at time 0. At time 1, it might change to W, change to S at time 2, change to N at time 3, change to E at time 4, and so on.
 
Saya doesn't know the initial status of the marks. She is affected by this rule, but she decides to do something more.
Ivan gave Saya a special prop which called Riki. With Riki’s help, she can get the position of the treasure.
In each unit time, Saya will do all of the following three things:
Firstly, she will check the treasure’s position with Riki.
Secondly, she will move follow the designer’s magic the same with the treasure.(If no element exists in the direction of movement,the movement will be cancelled.)
Thirdly, Saya can either move to one direction (N, S, E, and W) a cell or stay there. Saya prefers to be closer with the treasure; if there are many ways with the same geometrical distance, Saya prefers to stay there than move, prefer E than W, W than N, and N than S. Here we should use the position checked at the first step.
You are given the size of the matrix and all the marks of the elements at time 0. Your task is to simulate Saya and the treasure’s movement, and then tell Saya the result.

## Input

The input consists of several test cases.
The first line of input in each test case contains one integer N (0<N≤30), which represents the size of the matrix.
Each of the next N lines contains a string whose length is N, represents the elements of the matrix. The string only consists of N, E, W and S.
The last case is followed by a line containing one zero.

## Output

For each case, print the case number (1, 2 …) and the result of Saya’s explore.
If Saya can get the treasure at step x (x≤100)(that means at the begainning of time x, Saya and the treasure stay in the same cell), print “Get the treasure! At step x.”. 
If after simulating x (x≤100) steps, you found out that Saya can't get the treasure, print “Impossible. At step x.” 
If you have simulated 100 steps but don’t know whether Saya can get the treasure, print “Not sure.”
Your output format should imitate the sample output. Print a blank line after each test case.

## Sample Input
```
5
EWSSE
NNENN
EENNE
SWSEW
NSNSW

0

```
## Sample Output
```
Case 1:
Get the treasure! At step 12.

```

## HINT

Q&A
Q: How can I know it’s impossible for Saya to get the treasure?
A: Suppose at time 5, Saya at (1, 1) while the treasure at (2, 2); at time 13, Saya at (1, 1) while the treasure at (2, 2) again. Since both Saya and the treasure go to the same place and have the same direction again, it is a loop, and they will just repeats the moves forever. So at time 13, we can judge it is impossible.

## Append Code
Source