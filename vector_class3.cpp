#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> newV;
    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }
    
    cout << endl;

    newV.push_back(7);
    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    cout << endl;


    newV.push_back(61);
    newV.push_back(1);
    newV.push_back(1000);

    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    return 0;
}