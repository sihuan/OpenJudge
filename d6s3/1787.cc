#include <iostream>
using namespace std;

class Vector {
private:
    int i_, j_, k_;

public:
    Vector()
        : i_(0)
        , j_(0)
        , k_(0)
    {
    }
    Vector(int i, int j, int k)
        : i_(i)
        , j_(j)
        , k_(k)
    {
    }
    friend Vector operator+(Vector& a, Vector& b)
    {
        return Vector(a.i_ + b.i_, a.j_ + b.j_, a.k_ + b.k_);
    }
    friend Vector operator-(Vector& a, Vector& b)
    {
        return Vector(a.i_ - b.i_, a.j_ - b.j_, a.k_ - b.k_);
    }
    friend Vector operator*(Vector& a, int b)
    {
        return Vector(a.i_ * b, a.j_ * b, a.k_ * b);
    }
    friend Vector operator*(Vector& a, Vector& b)
    {
        return Vector(a.j_ * b.k_ - a.k_ * b.j_, a.k_ * b.i_ - a.i_ * b.k_, a.i_ * b.j_ - a.j_ * b.i_);
    }
    friend istream& operator>>(istream& in, Vector& v)
    {
        in >> v.i_ >> v.j_ >> v.k_;
        return in;
    }
    friend ostream& operator<<(ostream& os, const Vector& v)
    {
        if (v.i_ == 0 && v.j_ == 0 && v.k_ == 0)
            os << 0;
        else {
            if (v.i_)
                os << v.i_ << "i";
            if (v.j_ == 0)
                ;
            else if (v.j_ < 0)
                os << v.j_ << "j";
            else if (v.i_)
                os << "+" << v.j_ << "j";
            else
                os << v.j_ << "j";
            if (v.k_ == 0)
                ;
            else if (v.k_ < 0)
                os << v.k_ << "k";
            else if (v.i_ || v.j_)
                os << "+" << v.k_ << "k";
            else
                os << v.k_ << "k";
        }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

