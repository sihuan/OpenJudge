#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;



class Vector
{
    int a, b, c;
public:
    Vector(int a=0, int b=0, int c=0):a(a), b(b), c(c) {}

    Vector operator+ (Vector &A) {return Vector(a + A.a, b + A.b, c + A.c);}
    Vector operator-(Vector &A) {return Vector(a - A.a, b - A.b, c - A.c);}
    Vector operator*(Vector &A) {return Vector(b * A.c - c * A.b, c * A.a - a * A.c, a * A.b - b * A.a);}
    Vector operator*(double s) {return Vector(s * a, s * b, s * c); }

    friend istream &operator >> (istream &is, Vector&v) {is >> v.a >> v.b >> v.c; return is;}
    friend ostream &operator << (ostream &os, Vector&v) {
        if(v.a && v.b < 0 && v.c > 0) os << v.a << "i" << v.b << "j+" << v.c << "k";
        else if(v.b > 0 && v.c < 0) os << v.a << "i+" << v.b << "j" << v.c << "k";
        else if(v.b < 0 && v.c < 0) os << v.a << "i" << v.b << "j" << v.c << "k";
        else if(v.b == 0 && v.a && v.c < 0) os << v.a << "i" << v.c << "k";
        else if(v.a && v.b && v.c) os << v.a << "i+" << v.b << "j+" << v.c << "k";
        else if(!v.a && v.b && v.c) os << v.b << "j+" << v.c << "k";
        else if(v.a && !v.b && v.c) os << v.a << "i+" << v.c << "k";
        else if(v.a && v.b && !v.c) os << v.a << "i+" << v.b << "j";
        else if(!v.a && !v.b && v.c) os << v.c << "k";
        else if(!v.a && v.b && !v.c) os << v.b << "j";
        else if(v.a && !v.b && !v.c) os << v.a << "i";
        else os<<"0";

        return os;
    }
};

int main()
{
    Vector vec1, vec2, vec3;
    int cases, n;
    cin>>cases;
    cout<<"vect+vec2\tn*vec1\tvec1*vec2\n";
    for (int i = 0; i < cases; i++)
    {
        cin>>vec1>>vec2>>n;
        vec3 = vec1 + vec2;
        cout<<vec3<<"\t";
        vec3 = vec1 * n;
        cout<<vec3<<"\t";
        vec3 = vec1 * vec2;
        cout<<vec3<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1787
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

