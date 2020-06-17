#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


class Role {
public:
    Role (string n="", int h=0, int c=0, int d=0, int f=0)
        : name(n), hp(h), ce(c), de(d), fa(f) {}
    void combat (Role &an) {
        Role ano = an;
        Role thi = *this;
        Role *a, *b, *t;
        if (ano.fa >= fa) {a = &ano; b = &thi;}
        else {b = &ano; a = &thi;}
        while (1) {
            cout << a->name << " attacks " << b->name << ':';
            if (b->de >= a->ce) (b->hp)--;
            else (b->hp) -= a->ce - b->de;
            if (b->de > 0) b->de --;
            if (b->hp < 0) b->hp = 0;
            cout << b->name << " hp=" << b->hp << ",de=" << b->de << endl;
            if (b->hp <= 0) {
                cout << a->name << " wins." << endl;
                break;
            }
            t = a;
            a = b;
            b = t;
        }
    }

    int hp, ce, de, fa;
    string name;
};




int main()
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
/**************************************************************
	Problem: 2214
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

