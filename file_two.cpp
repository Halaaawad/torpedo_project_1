
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    cout << "Enter your sentence" << endl;
    getline(cin, name);
    reverse(name.begin(), name.end());
    cout << "Reversed sentence " << name << endl;
}

