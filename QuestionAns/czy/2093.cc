#include <bits/stdc++.h>

using namespace std;

int counts=0;
int countp=0;
int countf=0;
int countb=0;
int countss=0;
int countsss=0;
class Song
{
public:
    string name;
    static int getCntOfSongs() {return counts;}
    Song(string n):name(n){counts++;}
    virtual string style()=0;
};

class Pop : public Song
{
public:
    Pop(string nt):Song(nt){countp++;}
    static int getCntOfPops(){return countp;}
    string style(){return "popular";}
};

class Folk : public Song
{
public:
    Folk(string nt):Song(nt){countf++;}
    static int getCntOfFolks(){return countf;}
    string style(){return "folk";}
};

class Bel : public Song
{
public:
    Bel(string nt):Song(nt){countb++;}
    static int getCntOfBels(){return countb;}
    string style(){return "Bel Canto";}
};

class Singer
{
public:
    string names;
    vector<Song *> songList;
    Singer(string namee):names(namee){countss++;}
    void addASong(string s,int t)
    {
        if(t==1) songList.push_back(new Pop(s));
        else if(t==2) songList.push_back(new Folk(s));
        else if(t==3) songList.push_back(new Bel(s));
     }

     void  singASong(string songsss)
     {
         Song *singType;
         bool flag=0;
            int n=songList.size();
            for(int i=0;i<n;++i)
            {
                if(songList[i]->name==songsss)
                {
                    flag=1;
                    singType=songList[i];
                    break;
                }
            }
         if(flag==1)
         {
             cout<<names<<" sings "<<songsss<<" in "<<singType->style()<<" style."<<endl;
         }
         else
         {
             cout<<names<<" doesn't sing "<<songsss<<"."<<endl;
         }
     }
     static int getCntOfSingers() {return countss;}
};

class SingerList
{
    vector <Singer >Singer_List;
public:
    SingerList(){countsss++;}
    friend istream & operator >>(istream & is,SingerList &p) ///&p
    {
        int n;
        is>>n;
        for(int i=0;i<n;++i)
        {
            string sSingerListName;
            is>>sSingerListName;
            Singer singer(sSingerListName);
            int m;
            is>>m;
            for(int k=0;k<m;++k)
            {
                int temp;
                string sname;
                is>>temp>>sname;
                if(temp==1)
                    singer.songList.push_back(new Pop(sname));
                else if(temp==2)
                    singer.songList.push_back(new Folk(sname));
                else if(temp==3)
                    singer.songList.push_back(new Bel(sname));
            }
            p.Singer_List.push_back(singer);
        }
        return is;
    }
    friend ostream & operator <<(ostream & os,SingerList &p)
    {
        int n=p.Singer_List.size();
        //os<<endl<<n<<endl;
        for(int i=0;i<n;++i)
        {
            os<<p.Singer_List[i].names<<" :";
            int m=p.Singer_List[i].songList.size();
            for(int k=0;k<m;++k)
            {
                os<<" "<<p.Singer_List[i].songList[k]->name;

            }
            os<<endl;
        }
        return os;
    }
    void Choose(string s1, string s2)
    {
        int id=0;
        int exist=false;
        int n=Singer_List.size();
        for(int i=0;i<n;++i)
        {
            if(Singer_List[i].names==s1)
            {
                id=i;
                exist=true;
                break;
            }
        }
        if (!exist) {
            cout << "Singer " << s1 << " doesn't exist." << endl;
            return;
        }
        exist=false;
        n=Singer_List[id].songList.size();
        for(int i=0;i<n;++i)
        {
            if(s2==Singer_List[id].songList[i]->name)
            {
                cout<<s1<<" sings "<<s2<<" in "<<Singer_List[id].songList[i]->style()<<" style."<<endl;
                return ;
            }
        }
       cout << s1 << " doesn't sing " << s2 << "." << endl;
    }
};

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1288 kb
****************************************************************/

