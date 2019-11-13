#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <algorithm>

using namespace std;

class Role{
public:
    Role(string n,int h,int c,int d,int f) : name(n),hp(h),ce(c),de(d),fa(f){}
    void combat(Role& another){
        Role* f = this,*s = &another;
        if(f->fa < s->fa) swap(f,s);
        while(f->hp && s->hp){
            if(f->ce > s->de) s->hp -= f->ce-s->de;
            else s->hp -= 1;
            if(s->hp < 0) s->hp = 0;
            s->de -= 1;
            if(s->de < 0) s->de = 0;
            cout<<f->name<<" attacks "<<s->name<<":"<<s->name<<" hp="<<s->hp<<",de="<<s->de<<endl;
            swap(f,s);
        }
        if(f->hp == 0) cout<<s->name<<" wins."<<endl;
        if(s->hp == 0) cout<<f->name<<" wins."<<endl;
    }
private:
    int hp,ce,de,fa;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

