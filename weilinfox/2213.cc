#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


class QQ {
public:
    QQ (int c=-1, string n=""):code(c), name(n) {}

    int code;
    string name;
};

class Group {
public:
    Group (string n=""):gname(n) {num = 0;}
    void addQQ (const QQ& n) {qname[num++] = n;}

    string gname;
    int num;
    QQ qname[1000];
};

bool fnc (QQ q1, QQ q2)
{
    return q1.code < q2.code;
}

class Friends {
public:
    Friends () {num = 0;}
    void addGroup (const Group& n) {g[num++] = n;}
    void findGroup (string gName) {
        int n = -1;
        QQ gr[1000];
        int nn = 0;
        for (int i = 0; i < num; i++)
            if (g[i].gname == gName) {
                n = i;
                break;
            }
        if (n == -1) cout << "Group " << gName << " : not existing." << endl;
        else
            if (g[n].num) {
                cout << "Group " << g[n].gname << " : ";
                for (int i = 0; i < g[n].num; i++) {
                    gr[nn++] = g[n].qname[i];
                }
                sort(gr, gr+nn, fnc);
                for (int i = 0; i < nn; i++) {
                    cout << gr[i].code << ' ' << gr[i].name;
                    if (i+1 == nn) cout << '.' << endl;
                    else cout << "; ";
                }
            } else {
                cout << "Group " << gName << " : empty." << endl;
            }
    }
    void findQq(int id) {
        string gr[100];
        int nn = 0;
        cout << "QQ " << id << " in : ";
        for (int i = 0; i < num; i++) {
            int get = 0;
            for (int j = 0; j < g[i].num; j++)
                if (g[i].qname[j].code == id) {
                    get = 1;
                    //cout << g[i].qname[i].name;
                    break;
                }
            if (get) {
                gr[nn++] = g[i].gname;
            }
        }
        if (!nn) cout << "empty." << endl;
        else {
            sort(gr, gr+nn);
            for (int i = 0; i < nn; i++) {
                cout << gr[i];
                if (i+1 != nn) cout << "; ";
                else cout << '.' << endl;
            }
        }
    }

    Group g[100];
    int num;
};


int main()
{
    int m, n, i, j, id;
    string str;
    Friends friends;
    cin>>m;
    for (i = 0; i < m; i++)
    {
        cin>>str>>n;
        Group group(str);
        for (j = 0; j < n; j++)
        {
            cin>>id>>str;
            QQ qq(id, str);
            group.addQQ(qq);
        }
        friends.addGroup(group);
    }

    cin>>m;
    for (i = 0; i < m; i++)
    {
        cin>>str;
        friends.findGroup(str);
    }

    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>j;
        friends.findQq(j);
    }
    return 0;
}
/**************************************************************
	Problem: 2213
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:24 ms
	Memory:2004 kb
****************************************************************/

