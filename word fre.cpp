#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string paragraph;

    cout<<"Enter paragraph:\n";
    getline(cin, paragraph);

    map<string,int> freq;

    stringstream ss(paragraph);

    string word;

    while(ss >> word)
    {
        freq[word]++;
    }

    cout<<"Word Frequencies:\n";

    for(auto x : freq)
    {
        cout<<x.first<<" : "<<x.second<<endl;
    }

    return 0;
}