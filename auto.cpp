#include <iostream>
#include <vector>

using namespace std;

int main(){

    //you should give values for new variables

    auto a = 10;//not declare type of variable, but initialize value

    auto b = 1.1;//not declare type of variable, but initialize value

    auto c = "Olga";//not declare type of variable, but initialize value

    auto d = true;//not declare type of variable, but initialize value

    //case for auto:
    vector<int> numbs = {15, 2, 72, 14};

    vector<int>::iterator it = numbs.begin();
    auto it2 = numbs.begin();//auto use for short code writing

    for (auto it = numbs.begin(); it != numbs.begin(); it++)
    {
        cout << *it << endl;
    }
    

    return 0;
}