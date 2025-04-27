// I learned how to impmenet a ternary operator using If Else conditional statement.

#include <iostream>
using namespace std;

int main() {

    int grade = 95;
    char letterGrade;

    if (grade >= 90) {
        letterGrade = 'A';
    } else if (grade >= 80) {
        letterGrade = 'B';
    } else if (grade >= 70) {
        letterGrade = 'C';
    } else if (grade >= 60) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    letterGrade = (grade >= 90) ? 'A' : (grade >= 80) ? 'B' : (grade >= 70) ? 'C' : (grade >= 60) ? 'D' : 'F';
    cout << "Your letter grade is: " << letterGrade << endl;
}