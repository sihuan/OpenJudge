#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Citrus {
protected:
	string Name;
	double weight;
public:
	Citrus(string n = 0, double w = 0) : Name(n), weight(w) {}
	void show(){cout << Name << " " << weight << "kg, is citrus fruit." << endl;}
};

class Mandarin : virtual public Citrus {
public:
	Mandarin(string n = 0, double w = 0) : Citrus(n, w) {}
	void show(){cout << Name << " " << weight << "kg, is mandarin." << endl;}
};

class Pomelo :virtual public Citrus {
public:
	Pomelo(string n = 0, double w = 0):Citrus(n, w) {}
	void show(){cout << Name << " " << weight << "kg, is pomelo." << endl;}
};

class Citron : virtual public Citrus {
public:
	Citron(string n = 0, double w = 0):Citrus(n, w) {}
	void show(){cout << Name << " " << weight << "kg, is citron." << endl;}
};

class Orange : virtual public Mandarin, virtual public Pomelo {
public:
	Orange(string n = 0, double w = 0) : Mandarin(n, w), Pomelo(n, w), Citrus(n, w) {}
	void show() {cout << Name << " " << weight << "kg, is orange." << endl;}
};

class Lime :virtual public Pomelo, virtual public Citron {
public:
	Lime(string n = 0, double w = 0) \
		:Pomelo(n, w), Citron(n, w), Citrus(n, w) {}
	void show() {cout << Name << " " << weight << "kg, is lime." << endl;}
};

class Tangerine :virtual public Mandarin, virtual public Orange {
public:
	Tangerine(string n = 0, double w = 0) \
		:Mandarin(n, w), Orange(n, w), Pomelo(n, w), Citrus(n, w) {}
	void show(){cout << Name << " " << weight << "kg, is tangerine." << endl;}
};

class Grapefruit :virtual public Pomelo, virtual public Orange {
public:
	Grapefruit(string n = 0, double w = 0) \
		:Orange(n, w), Pomelo(n, w), Mandarin(n, w), Citrus(n, w) {}
	void show() {cout << Name << " " << weight << "kg, is grapefruit." << endl;}
};

class Lemon :virtual public Orange, virtual public Lime {
public:
	Lemon(string n = 0, double w = 0) \
		:Orange(n, w), Lime(n, w), Pomelo(n, w), Mandarin(n, w), Citron(n, w), Citrus(n, w) {}
	void show() {cout << Name << " " << weight << "kg, is lemon." << endl;}
};


int main()
{
    Citrus     *c;
    Mandarin   *ma;
    Pomelo     *po;
    Citron     *ci;
    Orange     *og;
    Lime       *li;
    Tangerine  *ta;
    Grapefruit *gr;
    Lemon      *le;

    string name;
    double weight;
    while(cin >> name >> weight)
    {
        if(name == "Tangerine")
        {
            Tangerine tangerine(name, weight);
            c = ma = og = ta = &tangerine;
            c->show();
            ma->show();
            og->show();
            ta->show();
        }
        if(name == "Grapefruit")
        {
            Grapefruit grapefruit(name, weight);
            c = po = gr = &grapefruit;
            c->show();
            po->show();
            gr->show();
        }
        if(name == "Lemon")
        {
            Lemon lemon(name, weight);
            ma = og = &lemon;
            ci = li = &lemon;
            po = le = &lemon;
            ma->show();
            po->show();
            ci->show();
            og->show();
            li->show();
            le->show();
        }
    }
}

/**************************************************************
	Problem: 2309
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1276 kb
****************************************************************/

