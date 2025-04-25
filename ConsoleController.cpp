// I created a  console controller logic using Logical Operatos and If Else Condition.

#include <iostream>
using namespace std;

int main() {

   bool keyEnabled = false;
   bool keyUp = false;
   bool keyDown = false;
   bool keyRight = false;
   bool keyLeft = false;

   if (keyEnabled) {
        if (keyUp) {
            cout << "The player is moving up." << endl;
        } else if (keyDown) {
            cout << "The player is moving down." << endl;
        } else if (keyRight) {
            cout << "The player is moving right." << endl;
        } else if (keyLeft) {
            cout << "The player is moving left." << endl;
        } else {
            cout << "The player is not moving." << endl;
        }
    }
}