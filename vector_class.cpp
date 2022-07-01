#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int NUM = 5;

int main(){

    vector<int> rating(NUM);
    vector<string> titles(NUM);
    cout << "You will do exactly as told. You will enter " << endl;
    cout << NUM << " book titles and your ratings (0 - 10)" << endl;

    for (int i = 0; i < NUM; i++)
    {
        cout << "Enter title #" << i + 1 << ": ";
        getline(cin,titles[i]);
        cout << "Enter your rating (0 - 10): ";
        cin >> rating[i];
        cin.get();
    }
    cout << "Thank you. You entered the following: " << endl;
    cout << "Rating\tBook" << endl;
    for ( int i = 0; i < NUM; i++)
    {
        cout << rating[i] << "\t" << titles[i] << endl;
    }

    return 0;
}