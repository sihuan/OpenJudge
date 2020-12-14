#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class FlyThing {
protected:
	int locate_x, locate_y;
	string name;
public:
	virtual void fly() = 0;
	void show() {
		cout << name << " at " << locate_x << " " << locate_y << "\n";
	}
	FlyThing(string s, int x, int y) {
		name = s, locate_x = x, locate_y = y;
	}
};
class EnemyPlane : public FlyThing {
public:
	void fly() {
		++locate_y;
	}
	EnemyPlane(string s, int x, int y) : FlyThing(s, x, y) {

	}
};
class MyPlane : public FlyThing {
public:
	MyPlane(string s, int x, int y) : FlyThing(s, x, y) {

	}
	void fly() {
		char move;
		getchar(), move = getchar();
		if (move == 'a') {
			--locate_x;
		}
		else if (move == 's') {
			++locate_y;
		}
		else if (move == 'w') {
			--locate_y;
		}
		else {
			++locate_x;
		}
	}
};
int main()
{
    FlyThing **planes;
    int numOfEnemplanes, i, x, y, numOfMoves, j;
    string str;
    cin>>numOfEnemplanes;
    planes = new FlyThing*[numOfEnemplanes + 1];
    planes[0] = new MyPlane("WUDI", 50, 50);
    for(i = 1; i <= numOfEnemplanes; i++)
    {
        cin>>str>>x>>y;
        planes[i] = new EnemyPlane(str, x, y);
    }

    for (j = 0; j < numOfEnemplanes + 1; j++)
    {
        planes[j]->show();
    }

    cin>>numOfMoves;
    for (i = 0; i < numOfMoves; i++)
    {
        for (j = 0; j < numOfEnemplanes + 1; j++)
        {
            planes[j]->fly();
            planes[j]->show();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 2060
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

