#include <iostream>
#include <string>
#include <map>//container for pair: value and key
//map is a binar tree

using namespace std;

int main(){

    map<int,string> fruits{
        {100, "lemon"},
        {222, "banana"},
        {505, "pear"},
        {96, "apple"},
        {140, "pineapple"}
    };

    cout << "___________________________________________" << endl;
    cout << "| There are some fruits in our restaurant: |" << endl;
    cout << "|__________________________________________|" << endl;

    for (const auto &[price, name] : fruits) {
    cout << "Price of " << name << " is " << price
    << " rubles for each kilo.\n";
    }

    //string tmpo;
    int tmpr;

    cout << "___________________________________________" << endl;
    cout << "|   Enter your preferable price:           |" << endl;
    cout << "|__________________________________________|" << endl;
    cin >> tmpr;

    //string "Your order contains: ";

    switch (tmpr) {
    case 100: cout << "Your order contains: " << fruits[100]; break;
    case 222: cout << "Your order contains: " << fruits[222]; break;
    case 505: cout << "Your order contains: " << fruits[505]; break;
    case 96:  cout << "Your order contains: " << fruits[96];  break;
    case 140: cout << "Your order contains: " << fruits[140]; break;
    default:
    cout << "invalid input: " << tmpr << '\n';
    }
  
    return 0;
}