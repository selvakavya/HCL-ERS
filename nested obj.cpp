#include <iostream>
using namespace std;

class Test {
    int id;
public:
    Test(int i) : id(i) {
        cout << "Constructor " << id << endl;
    }
    ~Test() {
        cout << "Destructor " << id << endl;
    }
};

int main() {
    try {
        Test t1(1);

        {
            Test t2(2);
            Test t3(3);

            throw "Error occurred";
        }
    }
    catch (...) {
        cout << "Exception caught\n";
    }

    return 0;
}