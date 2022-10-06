#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <cstring>

using namespace std;

class Vector
{
public:
    Vector(int _x=0,int _y=0,int _z=0)
    {
        x=_x;
        y=_y;
        z=_z;
    }
    Vector operator+(Vector& another)
    {
        Vector result;
        result.x=x+another.x;
        result.y=y+another.y;
        result.z=z+another.z;
        return result;
    }
    Vector operator-(Vector& another)
    {
        Vector result;
        result.x=x-another.x;
        result.y=y-another.y;
        result.z=z-another.z;
        return result;
    }
    Vector operator*(int n)
    {
        Vector result;
        result.x=x*n;
        result.y=y*n;
        result.z=z*n;
        return result;
    }
    Vector operator*(Vector& another)
    {
        Vector result;
        result.x=y*another.z-z*another.y;
        result.y=z*another.x-x*another.z;
        result.z=x*another.y-y*another.x;
        return result;

    }
    friend istream& operator>>(istream&,Vector&);
    friend ostream& operator<<(ostream&,const Vector&);
private:
    int x,y,z;
};
istream& operator>>(istream& is,Vector& vec)
{
    is>>vec.x>>vec.y>>vec.z;
    return is;
}
ostream& operator<<(ostream& os,const Vector& vec)
{
    int f1=0,f2=0,f3=0;
    if(vec.x!=0)
    {
        os<<vec.x<<"i";
        f1=1;
    }
    if(vec.y!=0)
    {
        if(f1)
        {
            if(vec.y>0)
                os<<"+";
        }
        os<<vec.y<<"j";
        f2=1;
    }
    if(vec.z!=0)
    {
        if(f1||f2)
        {
            if(vec.z>0)
                os<<"+";
        }
        os<<vec.z<<"k";
    }
    if(vec.x==0&&vec.y==0&&vec.z==0)
        os<<0;
    return os;
}
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

