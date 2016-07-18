#include <QtGui/QApplication>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    vector<string> text;
    string str_in;
    while(getline(cin, str_in))
    {
        text.push_back(str_in);

    }

    cout << "input over" << endl;

    for(vector<string>::iterator it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for(auto &c : (*it))
            c = toupper(c);
        cout << *it <<endl;
    }



    return app.exec();
}
