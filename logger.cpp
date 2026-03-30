#include <iostream>
using namespace std;

#define LOG(msg) \
    cout << "[LOG] " << msg \
         << " | File: " << __FILE__ \
         << " | Line: " << __LINE__ \
         << " | Function: " << __func__ << endl;

void functionA() {
    LOG("Inside functionA");
}

void functionB() {
    LOG("Inside functionB");
}

int main() {
    LOG("Inside main");

    functionA();
    functionB();

    return 0;
}