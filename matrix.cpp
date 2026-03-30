#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    Matrix(initializer_list<initializer_list<int>> list) {
        rows = list.size();
        cols = list.begin()->size();

        data = new int*[rows];
        int i = 0;

        for (auto &row : list) {
            data[i] = new int[cols];
            int j = 0;
            for (auto &val : row) {
                data[i][j++] = val;
            }
            i++;
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;

        cout << "Memory freed (Destructor called)\n";
    }
};

int main() {
    Matrix m = {
        {1, 2, 3},
        {4, 5, 6}
    };

    m.display();

    return 0;
}