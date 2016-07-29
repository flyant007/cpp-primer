#include <QtGui/QApplication>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "exercise.h"
using namespace std;

shared_ptr<vector<int> > fun()
{
    return make_shared<vector<int> >();
}
void input(shared_ptr<vector<int> > p)
{
    int i;
    cout << "enter a int"<<endl;
    while(cin >> i)
        p->push_back(i);
}

void print(shared_ptr<vector<int> > p)
{
//    for(auto it = p->begin(); it != p->end(); ++it)
 //   for (/*vector<int>::iterator*/auto it = ptr_v->begin(); it != ptr_v->end(); ++it)
//        cout << *it << endl;
    for(int &e : *p)
        cout << e << endl;
}

Q_DECL_EXPORT int main(int argc, char *argv[])
{
//////    QApplication app(argc, argv);

//////    vector<string> text;
//////    string str_in;
//////    while(getline(cin, str_in))
//////    {
//////        text.push_back(str_in);
//////    }
//////    cout << "input over" << endl;
//////    for(vector<string>::iterator it = text.begin(); it != text.end() && !it->empty(); ++it)
//////    {
//////        for(auto &c : (*it))
//////            c = toupper(c);
//////        cout << *it <<endl;
//////    }


//////    char str1[] = "zifushuzu1";
//////    char str2[] = "zifuzhuzu2";
//////    size_t new_size = strlen(str1) + strlen(str2) + 1;
//////    char str3[new_size];
//////    strcpy(str3, str1);
//////    strcat(str3, str2);
//////    cout << str3<<endl;


//////    string word_current, word_front;
//////    cout << "enter one word one time" << endl;
//////    while(cin >> word_current)
//////    {
//////        if(word_current == word_front && isupper(word_current[0]))
//////        {
//////            break;
//////        }
//////        else
//////        {
//////            word_front = word_current;
//////        }
//////    }
//////    if(cin.eof())
//////        cout << "no word was repeated" << endl;
//////    else
//////        cout << word_front << "occurs twice" << endl;

//////    Screen myscreen;
//////    char ch = myscreen.get();
//////    cout << ch << endl;
//////    ch = myscreen.get(0,0);
//////    cout << ch << endl;


//////    string temp_str;
//////    string res;
//////    vector<string> vstr;
//////    ifstream in("file.in");
//////    if(in)
//////    {
//////        cerr << "open file.in success! \n";
//////    }
//////    ofstream out;
//////    out.open("file.out", ofstream::in);
//////    if(out)
//////    {
//////        cerr << "open file.out success! \n";
//////    }

//////    while(getline(in, temp_str))
//////    {
//////        vstr.push_back(temp_str);
//////    }

////////    while(in >> temp_str)
////////    {
////////        vstr.push_back(temp_str);
////////    }
//////    while(in >> temp_str)
//////    {
//////        out << temp_str << endl;
//////    }

//////    for(auto it = vstr.begin(); it != vstr.end(); ++it)
//////    {
//////        cout << *it << endl;
//////    }


//////    for(auto it = vstr.begin(); it != vstr.end(); ++it)
//////    {
//////        istringstream read;
//////        read.str(*it);
//////        while(read >> res)
//////            cout << res << endl;
//////    }




//////    string line, word;
//////    vector<PersonInfo> people;
//////    while(getline(cin, line))
//////    {
//////        PersonInfo info;
//////        istringstream record(line);
//////        record >> info.name;
//////        while(record >> word)
//////            info.phones.push_back(word);
//////        people.push_back(info);
//////    }

//////    for(auto it = people.begin(); it != people.end(); ++it)
//////    {
//////        cout << (*it).name << endl;
//////        for(auto it_ = (*it).phones.begin(); it_ != (*it).phones.end(); ++it_)
//////            cout << *it_ << endl;
//////    }



////    //9.13
//////    list<int> ilst(5, 4);
//////        vector<int> ivc(5, 5);

//////        //! from list<int> to vector<double>
//////        vector<double> dvc(ilst.cbegin(), ilst.cend());
//////        for (auto i : ilst) cout << i;
//////        cout << endl;
//////        //for (auto t : dvc) cout << t;
//////        cout << endl;

//////        //! from vector<int> to vector<double>
//////        vector<double> dvc2(ivc.begin(), ivc.end());
//////        //for (auto i : ivc) cout << i;
//////        cout << endl;
////    //for (auto t : dvc2) cout << t;


////12.6
    shared_ptr<vector<int> > pvi = fun();
    input(pvi);
    print(pvi);





//////    shared_ptr<string> p1;
//////    shared_ptr<list<int> > p2;
//////    string *str = new string;
//////    p1 = str;
//////    if(p1 && p1->empty())
//////        *p1 = "hello world!";
//////    cout << *p1 << endl;

//////    return app.exec();
//}


//#include <iostream>
//#include <vector>
//#include <string>
//#include <memory>

//using namespace std;

//vector<int> * dynamic_vector_generator()
//{
//    vector<int>* ptr_v = new vector<int>();
//    return ptr_v;
//}

//void dynamic_vector_processor(vector<int>* ptr_v);

//void dynamic_vector_printer(vector<int>* ptr_v);

//int main()
//{
//    /**
//      * testing the 3 functions
//      */
//    vector<int>* ptr_vi = dynamic_vector_generator();
//    dynamic_vector_processor(ptr_vi);
//    dynamic_vector_printer(ptr_vi);

//    delete ptr_vi;

    return 0;
}

///**
// *  @brief  return a pointer to dynamicly allocated vector of ints
// */
////vector<int>* dynamic_vector_generator()
////{
////    vector<int>* ptr_v = new vector<int>();
////    return ptr_v;
////}

///**
// * @brief return a pointer to vector of ints
// * @param ptr_v pointer to vector of ints
// */
//void dynamic_vector_processor(vector<int>* ptr_v)
//{
//    int i;
//    cout << "plz enter:\n";
//    while (cin >> i && i != 999) ptr_v->push_back(i);
//}

///**
// * @brief print the content of the vector that ptr_v points to
// * @param ptr_v
// */
//void dynamic_vector_printer(vector<int>* ptr_v)
//{
//    for (/*vector<int>::iterator*/auto it = ptr_v->begin(); it != ptr_v->end(); ++it) cout << *it << " ";
//    cout << "\n";
//}
