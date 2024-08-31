#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int guess;
    int chances;

    int secretNumber = rand() % 1000 + 1 ; 
    // cout<<secretNumber;

    cout << "Wecome to Guessing Game !" << endl;
    cout << "which level you want to do!" << endl;
    cout << "Press 1. Easy (6 chances)" << endl;
    cout << "Press 2. Medium (4 chances)" << endl;
    cout << "Press 3. Hard (2 chances)" << endl;
    cout << "Enter your wish: ";
    cin >> chances;

    switch (chances) {
        case 1:
            chances = 6;
            break;
        case 2:
            chances = 4;
            break;
        case 3:
            chances = 2;
            break;
        default:
            cout << "Invalid Your wish!. Byee !!!!!" << endl;
            return 0;
    }

    cout << "Guess Your secret Number:-" << endl;

    for (int i = 1; i <= chances; i++) {
        cout << "Attempt " << i << ": Enter your Guess number: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! win this Game !!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << " No ,Try a higher number." << endl;
        } else {
            cout << "No ,Try a lower number." << endl;
        }
    }

    cout << "The Guessing number was: " << secretNumber << endl;
    cout << "Thanks for playing this Game!! Visite Again!" << endl;

    return 0;
}
