#include <iostream>
#include <forward_list>

using namespace std;

int main(){

    cout << endl;

    forward_list<int> anaconda = {34, 28, 51, 12, 99};//initialization

    for (auto var : anaconda)//for each 
    {
        cout << var << endl;
    }

    //There are no push_back() and pop_back() methods.
    //If you choose forward_list,
    //it means that you want to manipulate
    //with elements in the front of container.
    //Forward_list works with the front of container faster
    //that other positions.

    cout << endl;

    forward_list<string> fi;
    fi.push_front("Asia");
    fi.push_front("America");
    fi.push_front("England");
    fi.push_front("Germany");

    for (auto var : fi)//for each 
    {
        cout << var << endl;
    }
    

    cout << endl;
    return 0;
}