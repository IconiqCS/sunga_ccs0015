// I created a Grade Generator using Comparison Operators and If Else Condition.


#include <iostream>

using namespace std;

int main() {

    int grade;
    //int studentGrade;

    cout << "Enter your final grade in Ethical Hacking: ";
    cin >> grade;

    cout << "---------------------------------------------" << endl
         << "Your final grade is: "; 


        if (grade >= 90) {
            cout << "A - Super Sakses!!!" << endl;
        }
        else if (80 <=  grade && grade < 90) {
            cout << "B - Sakses!" << endl;
        }
        else if (70 <= grade && grade < 80) {
            cout << "C - Slightly Sakses." << endl;
        }
        else cout << "F - Hindi Sumakses..." << endl;

}