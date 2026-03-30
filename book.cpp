#include <iostream>
using namespace std;

class Book {
private:
    string isbn, title, author;

public:
    // Default constructor
    Book() {
        isbn = "";
        title = "";
        author = "";
    }

    // Setters
    void setISBN(string i) { isbn = i; }
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }

    void updateTitle(const string &newTitle) {
        title = newTitle;
    }

    void print() {
        cout << "ISBN: " << isbn << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b; // default constructor

    b.setISBN("12345");
    b.setTitle("C++ Basics");
    b.setAuthor("Kavya");

    b.updateTitle("Advanced C++");

    b.print();
    return 0;
}