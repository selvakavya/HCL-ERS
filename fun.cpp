#include <iostream>
using namespace std;

class CryptoBox {
private:
    string privateKey;

public:
    CryptoBox(string key) {
        privateKey = key;
    }

    // Friend function
    friend void dumpForAudit(const CryptoBox &c);
};

// Friend function definition
void dumpForAudit(const CryptoBox &c) {
    cout << "Audit Access: Private Key = " << c.privateKey << endl;
}

// Normal function (cannot access private data)
void normalFunction(const CryptoBox &c) {
    // cout << c.privateKey; ❌ ERROR (uncomment → compilation error)
    cout << "Normal function cannot access private data\n";
}

int main() {
    CryptoBox box("SECRET123");

    dumpForAudit(box);   // allowed
    normalFunction(box); // not allowed

    return 0;
}