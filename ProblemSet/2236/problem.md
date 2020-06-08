# ssBoard Danceing
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Amusement park anniversary organizing group invited a prominent dance company to perform surprise theme dances at the anniversary celebrations. The company prepared four dances with chess theme, conveniently named King performance, Knight performance, Bishop performance and Rook performance.

Each dance is performed by a number of teams of dancers. The unusual setting in the amusement park seems to cause difficulties to a few sensitive company members, however. The main choreographer holds that if a dancer, during a performance,has in his/her sight another dancer of the same team it might sometimes confuse the dancer and tempt him/her to follow erroneously the  movements of the teammate. The implication is that the dancers of the same team should be suitably dispersed over the dancing area to be mutually obscured by the members of other teams. Moreover, any arrangement of this kind cannot be shared among the performances, because their styles and movements differ dramatically from each other.

For each of the four dances, the organizing group eventually managed to formulate exact limiting conditions based on company demands:

The performance takes place on a regular S×S square grid of markers on the floor.

Each dancer occupies one marker, no marker is left unoccupied, no two dancers share a common marker and each dancer remains at the same marker during the performance.  Each dancer belongs to exactly one team.

Suppose that the center of each marker coincides with some integer lattice point in a Cartesian grid and that the distance between the center of any marker and the center of its closest neighbour marker is 1.

Let us consider two different markers A and B with their respective centers located at Cartesian coordinates (x1,y1) and (x2,y2).


    *In the King performance ,if|x1 - x2| < 2 and |y1 - y2| < 2,then A and B must be occupied by members of different teams.

    *In the Knight performance,if|x1 - x2|*|y1 - y2| = 2,then A and B must be occupied by members of different teams.

    *In the Bishop performance, if |x1 - x2| = |y1 - y2|,then A and B must 
be occupied by members of different teams.

    *In the Rook performance, if|x1 - x2|*|y1 - y2| = 0,then A and B must be occupied by members of different teams.

For each of the four dances, the organizing group wants to know the minimum possible number of teams needed to perform the dance.



Sample Input

2 N
8 R
2 B
1 K

Output for Sample input

1
8
2
1


## Input
There are more test cases. Each test case consists of a single line with  integer S(1 <= S <= 1000) followed by a space and one of four  capital letters "K","N","B","R".S specifies the size of the marker grid  and letters denote King performance, Knight performance, Bishop  performance, or Rook performance, respectively.

## Output
For each test case, print a single line with one integer denoting the  minimum number of teams which are necessary to perform the given dance  on a marker grid of the given size.

## Sample Input
```
2 N
8 R
2 B
1 K
```
## Sample Output
```
1
8
2
1
```

## HINT
Append CodeSource#include 
#include 

int main() {
    #if 0
    freopen("1","r",stdin);