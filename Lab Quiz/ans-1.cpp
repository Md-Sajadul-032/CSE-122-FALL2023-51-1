#include <bits/stdc++.h>
using namespace std;

class Array {
private:
    vector<int>integerArray;
    vector<char>characterArray;
    vector<float>floatArray;

public:

    void insert(int index, int value) {
        if (index >= 0 && index <= integerArray.size())
            integerArray.insert(integerArray.begin() + index, value);
    }

    void insert(int index, char value) {
        if (index >= 0 && index <= characterArray.size())
            characterArray.insert(characterArray.begin() + index, value);
    }


    void insert(int index, double value) {
        if (index >= 0 && index <= floatArray.size())
            floatArray.insert(floatArray.begin() + index, value);
    }


    void display() {

        for (int i = 0; i < integerArray.size(); i++)
            cout << integerArray[i] << " ";
        cout<<endl;

        for (int i = 0; i < characterArray.size(); i++)
            cout << characterArray[i] << " ";
        cout<<endl;

        for (int i = 0; i < floatArray.size(); i++)
            cout << floatArray[i] << " ";
    }
};

int main() {
    Array obj;
    obj.insert(0, 12);
    obj.insert(1, 17);
    obj.insert(2, 25);

    obj.insert(0, 'x');
    obj.insert(1, 'y');
    obj.insert(2, 'z');

    obj.insert(0, 4.89);
    obj.insert(1, 3.83);

    obj.display();
}
