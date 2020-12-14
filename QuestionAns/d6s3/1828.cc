#include <iostream>
using namespace std;

class MyList {
private:
    int len_, curlen_;
    int* elem_;
    void moveItem(int* src, int* dst, int ss, int se, int ds)
    {
        for (int i = ss, j = ds; i < se; i++, j++)
            dst[j] = src[i];
    }

public:
    MyList(int l)
        : len_(l)
        , curlen_(0)
    {
        elem_ = new int[l];
    }
    void append(int d)
    {
        if (curlen_ == len_) {
            int* t = new int[len_ * 2];
            len_ *= 2;
            moveItem(elem_, t, 0, curlen_, 0);
            int* o = elem_;
            elem_ = t;
            delete[] o;
        }
        elem_[curlen_] = d;
        curlen_++;
    }
    void insert(int p, int d)
    {
        if (curlen_ == len_) {
            int* t = new int[len_ * 2];
            len_ *= 2;
            moveItem(elem_, t, 0, p, 0);
            t[p] = d;
            moveItem(elem_, t, p, curlen_, p + 1);
            int* o = elem_;
            elem_ = t;
            delete[] o;
        } else {
            int* t = new int[curlen_ - p];
            moveItem(elem_, t, p, curlen_, 0);
            elem_[p] = d;
            moveItem(t, elem_, 0, curlen_ - p, p + 1);
            delete[] t;
        }
        curlen_++;
    }
    void erase(int p)
    {
        moveItem(elem_, elem_, p + 1, curlen_, p);
        curlen_--;
    }
    void set(int p, int d)
    {
        elem_[p] = d;
    }
    void show()
    {
        for (int i = 0; i < curlen_; i++)
            if (i)
                cout << " " << elem_[i];
            else
                cout << elem_[i];
        cout << endl;
    }
};
int main()
{
    int cases, len, data, pos;
    char op;
    cin>>len;
    MyList myList(len);
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>op;
        switch (op)
        {
        case 'A':
            cin>>data;
            myList.append(data);
            break;
        case 'I':
            cin>>pos>>data;
            myList.insert(pos, data);
            break;
        case 'E':
            cin>>pos;
            myList.erase(pos);
            break;
        case 'S':
            cin>>pos>>data;
            myList.set(pos, data);
        }
        myList.show();
    }
    return 0;
}
/**************************************************************
	Problem: 1828
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

