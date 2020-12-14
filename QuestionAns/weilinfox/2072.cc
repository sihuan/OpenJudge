#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

class Light {
        int wt;
public:
        Light(int w):wt(w) {cout << "A " << w << "w light is created." << endl;}
        ~Light () {cout << "A " << wt << "w light is erased." << endl;}
};

class Chair {
        string colour;
public:
        Chair (string cl):colour(cl) {cout << "A " << cl << " chair is created." << endl;}
        ~Chair () {cout << "A " << colour << " chair is created." << endl;}
};

class ClassRoom: public Light, public Chair {
        int light, chair;
public:
        ClassRoom (int l, int c, int w, string cl):\
                Light(w), Chair(cl), light(l), chair(c) \
                {cout << "A classroom having " << l << " lights and " << c << " chairs is created." << endl;}
        ~ClassRoom () {cout << "A classroom having " << light << " lights and " << chair << " chairs is erased." << endl;}
};


int main()
{
    int nl, nc;
    int w;
    string color;
    cin>>w>>color;
    Light light(w);
    Chair chair(color);
    cin>>nl>>nc;
    cin>>w>>color;
    ClassRoom room(nl, nc, w, color);
    return 0;
}
/**************************************************************
	Problem: 2072
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

