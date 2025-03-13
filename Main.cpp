#include <iostream>
#include <cmath>
using namespace std;
float r, a, p, n;
void input_data(int) {
    cout << "Please enter the principal amount you want to deposit: ";
    cin >> p;
    cout << "What is the bank rate for the account type you chose? ";
    cin >> r;
    cout << endl;
}
void interest(float, float) {
    cout << "Year       Amount of deposit" << endl;
    for (int i = 1; i <= 10; i++)
    {
        a = p * pow(1 + r, i);
        cout << i << "      " << a << endl;
    }
    cout << endl;
};
void interest(float, float, float) {
    a = p * pow(1 + r, n);
    cout << a << endl;
};
int main() {
    int number;
    char ans;
    do {
        cout << "======= WELCOME TO THE MINI-BANK SYSTEM =======" << endl;
        cout << "Press \n1 to input bank details \n2 to display yearly amount for 10 years \n3 to display the amount of certain specified year" << endl;
        cin >> number;
        if (number == 1) {
            input_data(1);
        }
        else if (number == 2) {
            interest(p, r);
        }
        else if (number == 3) {
            cout << " Please enter the year you want to display the amount reached at: ";
            cin >> n;
            interest(p, r, n);
        }
        else {
            cout << "Not valid option" << endl;
            break;
        }
        cout << "Another Operation? (Y/N): ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    cout << "Thank you for banking with us :)" << endl;
}