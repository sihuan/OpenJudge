# wise
Time Limit: 1 Sec  Memory Limit: 64 MB


## Description

Saya have a long necklace with N beads, and she signs the beads from 1 to N. Then she fixes them to the wall to show N-1 vectors – vector i starts from bead i and end up with bead i+1.
One day, Kudo comes to Saya’s home, and she sees the beads on the wall. Kudo says it is not beautiful, and let Saya make it better.
She says: “I think it will be better if it is clockwise rotation. It means that to any vector i (i<N-1), it will have the same direction with vector i+1 after clockwise rotate T degrees, while 0<T≤180.”
It is hard for Saya to reset the beads’ places, so she can only remove some beads. To saving the beads, although she agrees with Kudo’s suggestion, she thinks counterclockwise rotation is also acceptable. A counterclockwise rotation means to any vector i (i<N-1), it will have the same direction with vector i+1 after counterclockwise rotate T degrees, while 0<T≤180.”
Saya starts to compute at least how many beads she should remove to make a clockwise rotation or a counterclockwise rotation.
Since the necklace is very-very long, can you help her to solve this problem?

## Input

The input consists of several test cases.
The first line of input in each test case contains one integer N (2<N≤300), which represents the number of beads.
Each of the next N lines contains two integer x and y, represents the coordinate of the beads. You can assume that 0<xy<10000.
The last case is followed by a line containing one zero.

## Output

For each case, print your answer with the following format:
If it is clockwise rotation without removing any beads, please print “C; otherwise if it is counterclockwise rotation without removing any beads, print “CC” instead; otherwise, suppose remove at least x beads to make a clockwise rotation and remove at least y beads to make a counterclockwise rotation. If x≤y, print “Remove x bead(s), C”, otherwise print “Remove x bead(s), CC” instead.
Your output format should imitate the sample output. Print a blank line after each test case.

## Sample Input
```
3
1 1
2 2
3 3

3
1 1
2 2
1 1

4
1 1
2 2
3 3
2 2

0

```
## Sample Output
```
C
CC
Remove 1 bead(s), C

```

## HINT


## Append Code
Source