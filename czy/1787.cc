#include"bits/stdc++.h"
using namespace std;



class Vector
{
private:
    int a,b,c;
public:
    Vector(){a=0;b=0;c=0;}
    Vector(int aa,int bb,int cc){
        a=aa;b=bb;c=cc;
    }
    friend  Vector operator+(Vector &p,Vector &A){
        return Vector(p.a+A.a,p.b+A.b,p.c+A.c);
    }
    friend  Vector operator-(Vector &p,Vector &A){
        return Vector(p.a-A.a,p.b-A.b,p.c-A.c);
    }
    friend Vector operator*(Vector &p,double s){
        return Vector(s*p.a,s*p.b,s*p.c);
    }
    friend Vector operator*(Vector &p,Vector &A){
        return Vector(p.b*A.c-p.c*A.b, p.c*A.a-p.a*A.c, p.a*A.b-p.b*A.a);
    }
    friend  istream &operator >>(istream &is,Vector&v)
    {
        is>>v.a>>v.b>>v.c;
        return is;
    }
    friend  ostream &operator <<(ostream &os,Vector&v)
    {
        if(v.a&&v.b<0&&v.c>0)
            os<<v.a<<"i"<<v.b<<"j+"<<v.c<<"k";
        else if(v.b>0&&v.c<0)
            os<<v.a<<"i+"<<v.b<<"j"<<v.c<<"k";
        else if(v.b<0&&v.c<0)
            os<<v.a<<"i"<<v.b<<"j"<<v.c<<"k";
        else if(v.b==0&&v.a&&v.c<0)
            os<<v.a<<"i"<<v.c<<"k";
        else if(v.a&&v.b&&v.c)
            os<<v.a<<"i+"<<v.b<<"j+"<<v.c<<"k";
        else if(!v.a&&v.b&&v.c)
            os<<v.b<<"j+"<<v.c<<"k";
        else if(v.a&&!v.b&&v.c)
            os<<v.a<<"i+"<<v.c<<"k";
        else if(v.a&&v.b&&!v.c)
            os<<v.a<<"i+"<<v.b<<"j";
        else if(!v.a&&!v.b&&v.c)
            os<<v.c<<"k";
        else if(!v.a&&v.b&&!v.c)
            os<<v.b<<"j";
        else if(v.a&&!v.b&&!v.c)
            os<<v.a<<"i";
        else
            os<<"0";
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

