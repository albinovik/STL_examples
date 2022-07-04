#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
//#include <algo.h>
#include <cctype>

using namespace std;

//string &ToLower(string &st);
string &ToLower(string &st)
{
    transform(st.begin(), st.end(),st.begin(), [](unsigned char c){ return tolower(c);});
    return st;
}

int main(){

    vector<string> words;
    cout << "Enter words (enter quit to quit): " << endl;
    string input;
    while(cin >> input && input != "quit")
    {
        words.push_back(input);
    }

    cout << "You entered the following words: " << endl;
    ostream_iterator<string,char> out(cout, " ");
    copy(words.begin(),words.end(), out);
    cout << endl;

    //putting words into set + convert all litters 
    set<string> wordset;
    //transform(words.begin(), words.end(), insert_iterator<set<string> > (wordset, wordset.begin()),ToLower);
    transform(words.begin(), words.end(), insert_iterator<set<string> > (wordset, wordset.end()), ToLower);
    cout << endl << "Alphabetic list of words: " << endl;
    copy(words.begin(),words.end(), out);
    cout << endl;

    //number of inputing into the map
    map<string, int> wordmap;
    set<string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
    {
        wordmap[*si] = count(wordset.begin(), wordset.end(), *si);
    }

    //map showing
    cout << endl;
    cout << "Words frequaency: " << endl;
    for (si = wordset.begin(); si != wordset.end(); si++)
    {
        cout << *si << ": " << wordmap[*si] << endl;
    }
     

    return 0;
}

//string &ToLower(string &st)
//{
//    transform(st.begin(), st.end(),st.begin(), tolower);
//    return st;
//}