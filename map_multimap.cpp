#include <iostream>
#include <string>
#include <map>//container for pair: value and key
//map is a binar tree

using namespace std;

int main(){

    pair<int,string> p(1, "phone");

    //cout << p.first << endl;
    //cout << p.second << endl;

    map<int,string> mymap;

    mymap.insert(p);
    mymap.insert(make_pair(2, "laptop"));
    mymap.insert(pair<int,string>(3, "computer"));
    mymap.emplace(4, "screen");

    //cout << p.first << endl;
    //cout << p.second << endl;

    map<int,string>::iterator it = mymap.begin();

    if (it == mymap.end()) 
    {
        cout << "Not found!\n";
    } 
    else 
    {
        cout << "Founds:\n";
            for (it; it != mymap.end(); it++) 
            {      //all values with keys
                cout << it->first << " " << it->second << endl;
            }
    }

    mymap[5] = "voltage regulator";
    mymap[1] = "battery";
    map<int,string>::iterator i = mymap.begin();

    if (i == mymap.end()) 
    {
        cout << "Not found!\n";
    } 
    else 
    {
        cout << "Founds:\n";
            for (i; i != mymap.end(); i++) 
            {      //all values with keys
                cout << i->first << " " << i->second << endl;
            }
    }

    
    return 0;
}