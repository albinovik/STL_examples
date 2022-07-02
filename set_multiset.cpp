#include <iostream>
#include <set>//binar tree

using namespace std;

int main(){

    set<double> tree1;

    tree1.insert(2.02);
    tree1.insert(1.79);
    tree1.insert(2.18);
    tree1.insert(1.00);
    tree1.insert(3.19);

    for (double var : tree1)//for each in order
    {
        cout << var << endl;
    }

    //we can change any elements

    //we can find
    //auto it = tree1.find(1.00);

    int value;
    cin >> value;

    if (tree1.find(value) != tree1.end())
    {
        cout << "number " << value << " is found" << endl;
    }
    else
    {
        cout << "number " << value << " is not found" << endl;
    }
    
    
    return 0;
}