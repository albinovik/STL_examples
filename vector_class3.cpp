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

    newV.push_back(7);//adding new element
    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    cout << endl;


    newV.push_back(61);//adding new element
    newV.push_back(1);//adding new element
    newV.push_back(1000);//adding new element

    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    cout << endl;

    newV.clear();//to empty all vector

    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    cout << endl;

    newV = {11, 13, 17, 19, 0, 66};//reinitialization
     cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    cout << endl;

    newV.pop_back();//delete 1 elenemt in the end
     cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    cout << endl;

    newV.reserve(50);//to reserve the memory
    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    cout << endl;

    newV.shrink_to_fit();//free up the memory
    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;

    cout << endl;

    newV.resize(9);//adding new zero elements
    cout << "capacity: " << newV.capacity() << endl;
    cout << "size: " << newV.size() << endl;
    for (int i = 0; i < newV.size(); i++)
    {
        cout << newV[i] << endl;
    }

    return 0;
}