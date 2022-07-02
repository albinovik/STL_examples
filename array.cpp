#include <iostream>
#include <array>

using namespace std;

int main(){

    array<double,4> massiv;// 4 means that array is static 
    //there are no push_back and similar methods
    //the size of array is constant at all the time
    massiv = {1.2, 0.98, 0.99, 1.4};

    for (auto var : massiv)//for each 
    {
        cout << var << endl;
    }

    cout << endl << massiv[2] << endl;//we can use [] for access to elements

    return 0;
}