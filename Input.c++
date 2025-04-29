#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name;
    int age;
    char sex;

    cin >> name;
    cout << "Type your name:";

    cin >> age;
    cout << "Type your age";

    cin >> sex;
    cout << "Type your sex";

    cout << endl
         << "Name: " << name << ", Age: " << age << ", Sex: " << sex;
}