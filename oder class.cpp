#include <iostream>
#include <vector>
using namespace std;

class Order {
private:
    vector<pair<int, int>> items; // (id, quantity)

public:
    void addLineItem(int id, int qty) {
        items.push_back({id, qty});
    }

    int totalItems() {
        int total = 0;
        for (auto &item : items) {
            total += item.second;
        }
        return total;
    }

    void printSummary() {
        cout << "Order Summary:\n";
        for (auto &item : items) {
            cout << "ID: " << item.first << ", Qty: " << item.second << endl;
        }
        cout << "Total Items: " << totalItems() << endl;
    }
};

int main() {
    Order o;

    o.addLineItem(101, 2);
    o.addLineItem(102, 5);

    o.printSummary();

    return 0;
}