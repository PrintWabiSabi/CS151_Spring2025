#include <iostream>
#include <string>
using namespace std;

bool validPin(const string& pin);
bool changePIN(string& currentPin, const string& newPin);
bool deposit(double& balance, double amount);
bool withdraw(double& balance, double amount);

int main() {
    string pin = "1234";
    double balance = 1000.0;

    if (changePIN(pin, "5678")) {
        cout << "PIN changed successfully" << endl;
    } else {
        cout << "PIN change failed" << endl;
    }

    if (deposit(balance, 200.0)) {
        cout << "Deposit successful" << endl;
    } else {
        cout << "Deposit failed" << endl;
    }

    if (withdraw(balance, 100.0)) {
        cout << "Withdrawal successful" << endl;
    } else {
        cout << "Withdrawal failed" << endl;
    }

    cout << "Final balance: " << balance << endl;

    return 0;
}

bool validPin(const string& pin) {
    if (pin.length() != 4) {
        return false;
    }
    for (char c : pin) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool changePIN(string& currentPin, const string& newPin) {
    if (validPin(newPin) && newPin != currentPin) {
        currentPin = newPin;
        return true;
    }
    return false;
}

bool deposit(double& balance, double amount) {
    if (amount > 0) {
        balance += amount;
        return true;
    }
    return false;
}

bool withdraw(double& balance, double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}
