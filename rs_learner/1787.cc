#include<bits/stdc++.h>
using namespace std;
class Vector
{
public:
    int i,j,k;
public:
    Vector(int _i=0,int _j=0,int _k=0):i(_i),j(_j),k(_k){}
    ~Vector(){}
    friend Vector operator+(const Vector &v1,const Vector &v2)
    {
        Vector v;
        v.i=v1.i+v2.i;
        v.j=v1.j+v2.j;
        v.k=v1.k+v2.k;
        return v;
    }
    friend Vector operator-(const Vector &v1,const Vector &v2)
    {
        Vector v;
        v.i=v1.i-v2.i;
        v.j=v1.j-v2.j;
        v.k=v1.k-v2.k;
        return v;
    }
    friend Vector operator*(Vector &v1,Vector &v2)
    {
        Vector v;
        v.i=v1.j*v2.k-v1.k*v2.j;
        v.j=-(v1.i*v2.k-v1.k*v2.i);
        v.k=v1.i*v2.j-v1.j*v2.i;
        return v;
    }
    friend Vector operator*(int n,Vector &v1)
    {
        Vector v;
        v.i=n*v1.i;
        v.j=n*v1.j;
        v.k=n*v1.k;
        return v;
    }
    friend Vector operator*(Vector &v1,int n)
    {
        Vector v;
        v.i=n*v1.i;
        v.j=n*v1.j;
        v.k=n*v1.k;
        return v;
    }
    friend ostream &operator<<(ostream &os,Vector &v)
    {
        if(v.i!=0&&v.j!=0&&v.k!=0)
        {
            if(v.j>0&&v.k>0)
                os<<v.i<<"i+"<<v.j<<"j+"<<v.k<<"k";
            else if(v.j<0&&v.k>0)
                os<<v.i<<"i"<<v.j<<"j+"<<v.k<<"k";
            else if(v.j>0&&v.k<0)
                os<<v.i<<"i+"<<v.j<<"j"<<v.k<<"k";
            else if(v.j<0&&v.k<0)
                os<<v.i<<"i"<<v.j<<"j"<<v.k<<"k";
        }
        else if(v.i==0&&v.j!=0&&v.k!=0)
        {
            if(v.k>0)
                os<<v.j<<"j+"<<v.k<<"k";
            else if(v.k<0)
                os<<v.j<<"j"<<v.k<<"k";
        }
        else if(v.i!=0&&v.j==0&&v.k!=0)
        {
            if(v.k>0)
                os<<v.i<<"i+"<<v.k<<"k";
            else if(v.k<0)
                os<<v.i<<"i"<<v.k<<"k";
        }
        else if(v.i!=0&&v.j!=0&&v.k==0)
        {
            if(v.j>0)
                os<<v.i<<"i+"<<v.j<<"j";
            else if(v.j<0)
                os<<v.i<<"i"<<v.j<<"j";
        }
        else if(v.i==0&&v.j==0&&v.k!=0)
        {
             os<<v.k<<"k";
        }
        else if(v.i!=0&&v.j==0&&v.k==0)
        {
            os<<v.i<<"i";
        }
        else if(v.i==0&&v.j!=0&&v.k==0)
        {
            os<<v.j<<"j";
        }
        else if(v.i==0&&v.j==0&&v.k==0)
        {
            os<<"0";
        }
        return os;
    }
     friend istream &operator>>(istream &is,Vector & v)
    {
        is>>v.i>>v.j>>v.k;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

