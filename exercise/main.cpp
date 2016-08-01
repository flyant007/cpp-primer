#include <QtGui/QApplication>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "exercise.h"
#include <map>
#include <set>
using namespace std;



Q_DECL_EXPORT int main(int argc, char *argv[])
{
//    QApplication app(argc, argv);
//    StrBlob b1;

//        StrBlob b2 = {"a", "an", "the"};
//        b1 = b2;
//        b2.push_back("about");

//    assert(!b2.back().empty());
//    cout << b1.back() << endl;


//    return app.exec();
    vector<int> ivec;
    for(/*vector<int>::size_type*/auto i = 0; i!= 10; ++i)
    {
        ivec.push_back(i);
        ivec.push_back(i);
    }

    set<int> iset(ivec.begin(), ivec.end());
    multiset<int> miset(ivec.begin(), ivec.end());
    cout << ivec.size() << endl;
    cout << iset.size() << endl;
    cout << miset.size() << endl;

}


