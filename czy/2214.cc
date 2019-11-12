#include <bits/stdc++.h>

using namespace std;

class Role
{
public:
    string name;
    int hp,ce,de,fa;
    Role(string n, int h, int c, int d, int f):name(n),hp(h),ce(c),de(d),fa(f){}
    void combat(Role &p)
    {
        int n=0;
        if(p.fa>=fa) n=0;
        else n=1;
        while(++n)
        {
            if(n%2!=0)
            {
                cout<<p.name<<" attacks "<<name<<":"<<name<<" ";
                if(de>=p.ce) hp--;
                else hp=hp-(p.ce-de);
                --de;
                if(de<0) de=0;
                if(hp<0) hp=0;
                cout<<"hp="<<hp<<",de="<<de<<""<<endl;
                if(hp==0)
                {
                    cout<<p.name<<" wins."<<endl;
                    break;
                }
            }
            else
            {
                cout<<name<<" attacks "<<p.name<<":"<<p.name<<" ";
                if(p.de>=ce) p.hp--;
                else p.hp=p.hp-(ce-p.de);
                --p.de;
                if(p.de<0) p.de=0;
                if(p.hp<0) p.hp=0;
                cout<<"hp="<<p.hp<<",de="<<p.de<<""<<endl;
                if(p.hp==0)
                    {
                        cout<<name<<" wins."<<endl;
                        break;
                    }
            }
        }
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

