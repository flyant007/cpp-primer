#include <QtGui/QApplication>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "exercise.h"
using namespace std;


Q_DECL_EXPORT int main(int argc, char *argv[])
{
//    QApplication app(argc, argv);

//    vector<string> text;
//    string str_in;
//    while(getline(cin, str_in))
//    {
//        text.push_back(str_in);
//    }
//    cout << "input over" << endl;
//    for(vector<string>::iterator it = text.begin(); it != text.end() && !it->empty(); ++it)
//    {
//        for(auto &c : (*it))
//            c = toupper(c);
//        cout << *it <<endl;
//    }


//    char str1[] = "zifushuzu1";
//    char str2[] = "zifuzhuzu2";
//    size_t new_size = strlen(str1) + strlen(str2) + 1;
//    char str3[new_size];
//    strcpy(str3, str1);
//    strcat(str3, str2);
//    cout << str3<<endl;


//    string word_current, word_front;
//    cout << "enter one word one time" << endl;
//    while(cin >> word_current)
//    {
//        if(word_current == word_front && isupper(word_current[0]))
//        {
//            break;
//        }
//        else
//        {
//            word_front = word_current;
//        }
//    }
//    if(cin.eof())
//        cout << "no word was repeated" << endl;
//    else
//        cout << word_front << "occurs twice" << endl;

//    Screen myscreen;
//    char ch = myscreen.get();
//    cout << ch << endl;
//    ch = myscreen.get(0,0);
//    cout << ch << endl;


    string temp_str;
    string res;
    vector<string> vstr;
    ifstream in("file.in");
    if(in)
    {
        cerr << "open file.in success! \n";
    }
//    ofstream out;
//    out.open("file.out", ofstream::in);
//    if(out)
//    {
//        cerr << "open file.out success! \n";
//    }

    while(getline(in, temp_str))
    {
        vstr.push_back(temp_str);
    }

////    while(in >> temp_str)
////    {
////        vstr.push_back(temp_str);
////    }
//    while(in >> temp_str)
//    {
//        out << temp_str << endl;
//    }

//    for(auto it = vstr.begin(); it != vstr.end(); ++it)
//    {
//        cout << *it << endl;
//    }


    for(auto it = vstr.begin(); it != vstr.end(); ++it)
    {
        istringstream read;
        read.str(*it);
        while(read >> res)
            cout << res << endl;
    }




//    string line, word;
//    vector<PersonInfo> people;
//    while(getline(cin, line))
//    {
//        PersonInfo info;
//        istringstream record(line);
//        record >> info.name;
//        while(record >> word)
//            info.phones.push_back(word);
//        people.push_back(info);
//    }

//    for(auto it = people.begin(); it != people.end(); ++it)
//    {
//        cout << (*it).name << endl;
//        for(auto it_ = (*it).phones.begin(); it_ != (*it).phones.end(); ++it_)
//            cout << *it_ << endl;
//    }


//    return app.exec();
}
