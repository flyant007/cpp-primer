#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include <memory>
#include <stdexcept> //throw out_of_rang
#include <assert.h> //assert

using namespace std;

class Screen
{
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c) {}
    char get() const {return contents[cursor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    void some_member() const;
    Screen &set(char);
    Screen &set(pos, pos, char);
private:
    pos cursor;
    pos height;
    pos width;
    string contents;
    mutable size_t access_ctr;
};


inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos ht, pos wd) const
{
    pos row = ht * width;
    return contents[row + wd];
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

class Window_mgr
{
private:
    vector<Screen> screens;
};



class PersonInfo
{
public:
    string name;
    vector<string> phones;
};

class StrBlob
{
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const string &t) {data->push_back(t);}
    void pop_back();
    const string &front();
    const string &back();
private:
    shared_ptr<vector<string> > data;
    void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob():data(make_shared<vector<string> >()) {}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string> >(il)) {}
void StrBlob::check(size_type i, const string &msg) const
{
    if(i >= data->size())
        throw out_of_range(msg);
}

void StrBlob::pop_back()
{
    check(0, "pop back on empty StrBlob");
    data->pop_back();
}

const string & StrBlob::front()
{
    check(0, "front on empty StrBlob");
    data->front();
}

const string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    data->back();
}

#endif // EXERCISE_H
