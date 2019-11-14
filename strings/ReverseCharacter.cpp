#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str)
{

    // code goes here
    string temp;
    string::reverse_iterator it1;
    for (it1 = str.rbegin(); it1 != str.rend(); it1++)
    {
        temp.push_back(*it1);
    }
    return temp;
}

int main(void)
{
    string s;
    cin >> s;
    // keep this function call here
    cout << FirstReverse(s);
    return 0;
}