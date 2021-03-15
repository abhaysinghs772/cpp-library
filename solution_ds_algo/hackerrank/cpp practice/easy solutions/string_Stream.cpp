#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    stringstream ss(str);
    char ch;
    int inteGer;
    vector<int> result;
    while (ss >> inteGer)
    {
        result.push_back(inteGer);
        ss >> ch;
    }
    return result;


    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    

    return 0;
}