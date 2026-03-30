#include <iostream>
using namespace std;

class WalletAuditor; // forward declaration

class Wallet {
private:
    double balance;

public:
    Wallet() : balance(0) {}

    void deposit(double amt) {
        if (amt > 0)
            balance += amt;
    }

    void withdraw(double amt) {
        if (amt > 0 && amt <= balance)
            balance -= amt;
        else
            cout << "Invalid withdrawal\n";
    }

    // Friend class
    friend class WalletAuditor;
};

class WalletAuditor {
public:
    void report(const Wallet &w) {
        cout << "Wallet Balance (Audit): " << w.balance << endl;
    }
};

// Third class (NOT a friend)
class Hacker {
public:
    void tryAccess(const Wallet &w) {
        // cout << w.balance; ❌ ERROR (not allowed)
        cout << "Hacker cannot access private balance\n";
    }
};

int main() {
    Wallet w;
    w.deposit(1000);
    w.withdraw(200);

    WalletAuditor auditor;
    auditor.report(w);

    Hacker h;
    h.tryAccess(w);

    return 0;
}