#include <iostream>

using namespace std;

class Vector{
    friend istream& operator >>(istream& is,Vector& v){
        is>>v.x_>>v.y_>>v.z_;
        return is;
    }
    friend ostream& operator <<(ostream& os,const Vector& v){
        if(v.x_==0 && v.y_==0 && v.z_==0) os<<0;
        else {
            if(v.x_) os<<v.x_<<"i";
            if(v.y_==0) ;
            else if(v.y_<0) os<<v.y_<<"j";
            else if(v.x_)os<<"+"<<v.y_<<"j";
            else os<<v.y_<<"j";
            if(v.z_==0) ;
            else if(v.z_<0) os<<v.z_<<"k";
            else if(v.x_ || v.y_)os<<"+"<<v.z_<<"k";
            else os<<v.z_<<"k";
        }
        return os;
    }
public:
    Vector() : x_(0),y_(0),z_(0){}
    Vector(int x,int y,int z) : x_(x),y_(y),z_(z){}
    Vector operator+(const Vector& a){
        Vector c(a.x_+x_,a.y_+y_,a.z_+z_);
        return c;
    }
    Vector operator*(const Vector& a){
        Vector c(y_*a.z_-a.y_*z_,a.x_*z_-x_*a.z_,x_*a.y_-a.x_*y_);
        return c;
    }
    Vector operator*(int n){
        Vector c(x_*n,y_*n,z_*n);
        return c;
    }
private:
    int x_;
    int y_;
    int z_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

