#include <iostream>
#include <array>

using namespace std;

int main(){

    array<int,4> ma1 = {2, 5, 7, 11};
    array<int,4> ma2 = {2, 5, 9, 15};

    bool compare = (ma1 == ma2);
    cout << compare << endl;
    

    //for (auto var : massiv)//for each 
    //{
    //    cout << var << endl;
    //}

    return 0;
}