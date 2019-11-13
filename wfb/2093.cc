#include <iostream>
#include <vector>

using namespace std;

class Song{
public:
    Song(string n) : name_(n){++cntOfSongs;}
    static int getCntOfSongs(){return cntOfSongs;}
    string getN() const {return name_;}
    string type() const {return t;}
protected:
    static int cntOfSongs;
    string name_;
    string t;
};
class Pop : public Song{
public:
    Pop(string n) : Song(n){++cntOfPops; t="in popular style.";}
    static int getCntOfPops(){return cntOfPops;}
private:
    static int cntOfPops;
};
class Folk : public Song{
public:
    Folk(string n) : Song(n){++cntOfFolks; t="in folk style.";}
    static int getCntOfFolks(){return cntOfFolks;}
private:
    static int cntOfFolks;
};
class Bel : public Song{
public:
    Bel(string n) : Song(n){++cntOfBels; t="in Bel Canto style.";}
    static int getCntOfBels(){return cntOfBels;}
private:
    static int cntOfBels;
};
class Singer{
public:
    Singer(string n) : name(n){++cntOFSingers;}
    void addASong(string s, int t){
        switch(t){
        case 1:
            v.push_back(Pop(s));
            break;
        case 2:
            v.push_back(Folk(s));
            break;
        case 3:
            v.push_back(Bel(s));
            break;
        }
    }
    void singASong(string s) {
        bool isHave = false;
        for(ite = v.begin(); ite!=v.end(); ++ite) {
            if(ite->getN() == s) {
                isHave = true;
                cout<<name<<" sings "<<s<<" "<<ite->type()<<endl;;
            }
        }
        if(!isHave) cout<<name<<" doesn't sing "<<s<<"."<<endl;
    }
    static int getCntOfSingers() {return cntOFSingers;}
    static int cntOFSingers;
    string name;
    vector<Song> v;
    vector<Song>::iterator ite;
};
class SingerList{
public:
    friend istream& operator >>(istream& is,SingerList &s){
        int n;
        is>>n;
        for(int i=0; i<n; ++i){
            string n_;
            is>>n_;
            Singer sin(n_);
            int m;
            is>>m;
            string x;
            int t;
            for(int j=0; j<m; ++j){
                is>>t>>x;
                sin.addASong(x,t);
            }
            s.c.push_back(sin);
        }
        return is;
    }
    friend ostream& operator<<(ostream& os,SingerList& s){
        vector<Singer>::iterator ite;
        for(ite = s.c.begin(); ite!=s.c.end(); ++ite){
            os<<ite->name<<" :";
            for(ite->ite = ite->v.begin(); ite->ite!=ite->v.end(); ++ite->ite){
                os<<" "<<ite->ite->getN();
            }
            os<<endl;
        }
        return os;
    }
    void Choose(string s1, string s2){
        vector<Singer>::iterator ite;
        bool isHave1 = false;
        for(ite=c.begin(); ite!=c.end(); ++ite){
            if(ite->name == s1){
                isHave1 = true;
                bool isHave2 = false;
                for(ite->ite=ite->v.begin(); ite->ite!=ite->v.end(); ++ite->ite){
                    if(ite->ite->getN() == s2){
                        isHave2 = true;
                        cout<<s1<<" sings "<<s2<<" "<<ite->ite->type()<<endl;;
                    }
                }
                if(!isHave2) cout<<s1<<" doesn't sing "<<s2<<"."<<endl;
            }
        }
        if(!isHave1) cout<<"Singer "<<s1<<" doesn't exist."<<endl;
    }
    SingerList() {}
private:
    vector<Singer> c;
};

int Song::cntOfSongs = 0;
int Pop::cntOfPops = 0;
int Folk::cntOfFolks = 0;
int Bel::cntOfBels = 0;
int Singer::cntOFSingers = 0;
int main()
{
    cout<<"In beginning, there are ";
    cout<<Singer::getCntOfSingers()<<" singers, and ";
    cout<<Song::getCntOfSongs()<<" songs."<<endl;
    Singer liuh("LiuHuan");
    liuh.addASong("XiongDi", 1);
    liuh.addASong("SanGuo", 2);
    liuh.addASong("SongBie", 3);
    liuh.singASong("XiongDi");
    liuh.singASong("SanGuo");
    liuh.singASong("SongBie");
    liuh.singASong("MeiYou");

    SingerList lst;
    string s1, s2;
    cin>>lst;
    cout<<lst;
    cout<<"Now, there are ";
    cout<<Singer::getCntOfSingers()<<" singers, and ";
    cout<<Song::getCntOfSongs()<<" songs. Including ";
    cout<<Pop::getCntOfPops()<<" pop songs, ";
    cout<<Folk::getCntOfFolks()<<" folk songs, and ";
    cout<<Bel::getCntOfBels()<<" Bel Canto songs."<<endl;
    while(cin>>s1>>s2)
    {
        lst.Choose(s1, s2);
    }
    return 0;
}

/**************************************************************
	Problem: 2093
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1288 kb
****************************************************************/

