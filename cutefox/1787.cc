#include <iostream>
using namespace std;
class Vector
{
private:
    int i, j, k;
public:
    Vector (int a = 0, int b = 0, int c = 0) : i(a), j(b), k(c) {  }
    ~Vector() {  }
public:
    Vector operator +(const Vector &v)
    {
        int ii, jj, kk;
        ii = i + v.i;
        jj = j + v.j;
        kk = k + v.k;
        return Vector(ii, jj, kk);
    }
     Vector operator -(const Vector &v)
    {
        int ii, jj, kk;
        ii = i - v.i;
        jj = j - v.j;
        kk = k - v.k;
        return Vector(ii, jj, kk);
    }
      Vector operator *(const Vector &v)
    {
        int ii, jj, kk;
        ii = j * v.k - v.j * k;
        jj = k * v.i - i * v.k;
        kk = i * v.j - v.i * j;
        return Vector(ii, jj, kk);
    }
        Vector operator *(int n)
    {
        int ii, jj, kk;
        ii = i * n;
        jj = j * n;
        kk = k * n;
        return Vector(ii, jj, kk);
    }
    friend ostream &operator <<(ostream &os, const Vector & v)
    {
       if(v.i > 0)
         os << v.i << "i";
       if(v.i < 0)
        os << v.i << "i";
       if(v.j > 0 && v.i != 0)
         os << "+" << v.j << "j";
       if(v.j > 0 && v.i == 0)
         os << v.j << "j";
       if(v.j < 0)
        os << v.j << "j";
       if(v.k > 0 && ( v.i != 0 || v.j != 0))
         os << "+" << v.k << "k";
        if(v.k > 0 && v.i == 0 && v.j == 0)
         os << v.k << "k";
       if(v.k < 0)
        os << v.k << "k";
        if(v.i == 0 && v.j ==0 && v.k == 0)
            os << 0;
        return os;
    }
    friend istream &operator >>(istream &is, Vector &v)
    {
         is >> v.i >> v.j >> v.k;
        return is;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

