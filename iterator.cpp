#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> vector1 = {0.5, 0.77, 1.13, 0.89};

    vector<double>::iterator nameiterator;//iterator of vector (vector has double type)

    nameiterator = vector1.begin();

    cout << *nameiterator << endl;
    cout << *(nameiterator+1) << endl;
    cout << *(nameiterator+2) << endl;
    cout << *(nameiterator+3) << endl;

    *nameiterator = 100;

    //cout << *nameiterator << endl;

    cout << endl;

    for ( vector<double>::iterator i = vector1.begin(); i < vector1.end(); i++)
    {
        cout << *i << endl;
    }

    cout << endl;

    //from end to initial
    for ( vector<double>::reverse_iterator i = vector1.rbegin(); i < vector1.rend(); i++)
    {
        cout << *i << endl;
    }

    cout << endl;

    vector<double>::iterator it = vector1.begin();
    it++;
    vector1.insert(it,0.3333);
    for ( auto i = vector1.begin(); i != vector1.end(); i++)
    {
        cout << *i << endl;
    }

    //cout << endl;
    //advance(it, 4);
    //vector1.insert(it,0.6666);
    //for ( auto i = vector1.begin(); i != vector1.end(); i++)
    //{
    //    cout << *i << endl;
    //}

    cout << endl;
    vector<double>::iterator itErase = vector1.begin();
    vector1.erase(itErase);
    for ( auto i = vector1.begin(); i != vector1.end(); i++)
    {
        cout << *i << endl;
    }
    

    return 0;
}