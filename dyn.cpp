#include <iostream>
using namespace std;

class DynamicArray
{
    int *data;
    int size;
    int capacity;

public:

    DynamicArray()
    {
        capacity = 2;
        size = 0;
        data = new int[capacity];
    }

    void push(int value)
    {
        if(size == capacity)
        {
            capacity *= 2;

            int *newData = new int[capacity];

            for(int i=0;i<size;i++)
                newData[i] = data[i];

            delete[] data;
            data = newData;
        }

        data[size++] = value;
    }

    void pop()
    {
        if(size > 0)
            size--;
    }

    void display()
    {
        for(int i=0;i<size;i++)
            cout<<data[i]<<" ";
    }
};

int main()
{
    DynamicArray arr;

    arr.push(10);
    arr.push(20);
    arr.push(30);

    arr.pop();

    arr.display();
}