#include <iostream>
using namespace std;

// Compile-time polymorphism
class MathOps {
public:
    static int pow(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

    static double pow(double base, double exp) {
        return std::pow(base, exp);
    }
};

// Runtime polymorphism
class Function {
public:
    virtual double evaluate(double x) {
        return x;
    }
    virtual ~Function() {}
};

class Square : public Function {
public:
    double evaluate(double x) override {
        return x * x;
    }
};

class Cube : public Function {
public:
    double evaluate(double x) override {
        return x * x * x;
    }
};

int main() {
    // Compile-time
    cout << "Int pow: " << MathOps::pow(2, 3) << endl;
    cout << "Double pow: " << MathOps::pow(2.5, 2) << endl;

    // Runtime
    Function *f;

    Square s;
    Cube c;

    f = &s;
    cout << "Square: " << f->evaluate(3) << endl;

    f = &c;
    cout << "Cube: " << f->evaluate(3) << endl;

    return 0;
}