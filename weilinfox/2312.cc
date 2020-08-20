#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Fruit {
public:
    double w;
    Fruit (double w):w(w) {}
    double weight () {return w;}
};


class Juice: public virtual Fruit {
protected:
    double Juice_ratio;
public:
    Juice (double j, double w):Juice_ratio(j),Fruit(w) {}
    virtual double juice_weight () {return 0.0;}
};

class Salad: public virtual Fruit {
protected:
    double salad_ratio;
public:
    Salad (double s, double w):salad_ratio(s),Fruit(w) {}
    virtual double salad_weight () {return 0.0;}
};

class Peach: public virtual Juice, public virtual Salad {
public:
    Peach (double w, double j, double s):Juice(j, w), Salad(s, w),Fruit(w) {}
    double juice_weight() {return Salad::w * Juice_ratio * 0.6;}
    double salad_weight() {return Salad::w * salad_ratio * 0.4;}
};


class Apple: public virtual Juice, public virtual  Salad {
public:
    Apple (double w, double j, double s):Juice(j, w), Salad(s, w),Fruit(w) {}
    double juice_weight() {return Salad::w * Juice_ratio * 0.6;}
    double salad_weight() {return Salad::w * salad_ratio * 0.4;}
};

class Pineapple: public Juice {
public:
    Pineapple (double w, double j):Juice(j, w),Fruit(w) {}
    double juice_weight() {return w * Juice_ratio;}
};


class Banana: public Salad {
public:
    double salad_weight() {return w * salad_ratio;}
    Banana (double w, double s):Salad(s, w),Fruit(w) {}
};


int main()
{
    Fruit* fruit[100];
    Juice* juice[100];
    Salad* salad[100];

    string name;
    int cases, f, j, s;
    f = j = s = 0;
    cin >> cases;
    while(cases--)
    {
        cin >> name;
        double weight, s_ratio, j_ratio;
        if(name == "Peach")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Peach* p = new Peach(weight, j_ratio, s_ratio);
            fruit[f++] = p;
            juice[j++] = p;
            salad[s++] = p;
        }
        if(name == "Pineapple")
        {
            cin >> weight >> j_ratio;
            Pineapple* p = new Pineapple(weight, j_ratio);
            fruit[f++] = p;
            juice[j++] = p;
        }
        if(name == "Banana")
        {
            cin >> weight >> s_ratio;
            Banana* b = new Banana(weight, s_ratio);
            fruit[f++] = b;
            salad[s++] = b;
        }
        if(name == "Apple")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Apple* a = new Apple(weight, j_ratio, s_ratio);
            fruit[f++] = a;
            juice[j++] = a;
            salad[s++] = a;
        }
    }

    double fruit_weight, salad_weight, juice_weight;
    fruit_weight = salad_weight = juice_weight = 0;
    for(int i = 0; i < f; i++)
        fruit_weight += fruit[i]->weight();
    cout << "All fruits weight " << fruit_weight << " kg." << endl;
    for(int i = 0; i < j; i++)
        juice_weight += juice[i]->juice_weight();
    cout << "These fruits can juicing " << juice_weight << " kg fruit juice." << endl;
    for(int i = 0; i < s; i++)
        salad_weight += salad[i]->salad_weight();
    cout << "These fruits can making " << salad_weight << " kg fruit salad." << endl;
}

/**************************************************************
	Problem: 2312
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

