#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){

    cout << endl;

    int arr[] = {11, 9, 4, 23, 17};//easy massiv

    for (int var : arr)//for each 
    {
        cout << var << endl;
    }

    cout << endl;

    list<int> anaconda = {34, 28, 51, 12, 99};//list object

    for (auto var : anaconda)//for each 
    {
        cout << var << endl;
    }

    cout << endl;

    list<double> parameter = {3.13, 1.22, 4.01};//list object

    for (auto var : parameter)//for each 
    {
        cout << var << endl;
    }

    return 0;
}