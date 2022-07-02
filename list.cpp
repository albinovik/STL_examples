#include <iostream>
#include <list>

using namespace std;

int main(){

    list<double> mylist;

    mylist.push_back(13.04);//add element in the end
    mylist.push_front(40.17);//add element in the initial of list

    //list<double>::iterator it = mylist.begin();
    cout << "first print: " << endl;
    for (auto i = mylist.begin(); i != mylist.end(); i++)
    {
        cout << *i << endl;
    }

    //cout << endl;
    
    mylist.sort();//from small to large
    //PrintList(mylist);
    cout << endl;
    cout << "print after sort(): " << endl;
    for (auto i = mylist.begin(); i != mylist.end(); i++)
    {
        cout << *i << endl;
    }
    
    //cout << endl;
    mylist.reverse();//from large to small
    //PrintList(mylist);

    cout << endl;
    cout << "print after reverse(): " << endl;
    for (auto i = mylist.begin(); i != mylist.end(); i++)
    {
        cout << *i << endl;
    }

    //cout << *it << endl;

    cout << endl;
    cout << "three elements was edded and first element was deleted: " << endl;
    mylist.push_back(21.51);//add element in the end
    mylist.push_back(99.01);//add element in the end
    mylist.push_back(48.92);//add element in the end

    mylist.pop_front();//delete first element

    for (auto i = mylist.begin(); i != mylist.end(); i++)
    {
        cout << *i << endl;
    }
    cout << endl;
    cout << endl;
    
    cout << "new list: " << endl;
    list<int> list2 = {0, 3, 7, 9 , 1, 7, 2, 3};
    for (auto i = list2.begin(); i != list2.end(); i++)
    {
        cout << *i << endl;
    }

    cout << endl;

    cout << "print after clear(): " << endl;
    list2.clear();//to empty list
    for (auto i = list2.begin(); i != list2.end(); i++)
    {
        cout << *i << endl;
    }

    cout << endl;

    cout << "new list: " << endl;
    list<string> doing = {"cut", "chop","fry" , "boil", "heat"};
    for (auto i = doing.begin(); i != doing.end(); i++)
    {
        cout << *i << endl;
    }
    
    cout << endl << "afrer insert in second position: " << endl;
    auto it = doing.begin(); 
    it++;
    doing.insert(it,"open");
    for (auto i = doing.begin(); i != doing.end(); i++)
    {
        cout << *i << endl;
    }

    cout << endl << "afrer insert in any position: " << endl;
    advance(it,3);
    doing.insert(it, "close");
    for (auto i = doing.begin(); i != doing.end(); i++)
    {
        cout << *i << endl;
    }

    cout << endl << "print after erase: " << endl;
    auto it2 = doing.begin();
    advance(it2,4);
    doing.erase(it2);
    for (auto i = doing.begin(); i != doing.end(); i++)
    {
        cout << *i << endl;
    }

    //cout << endl << "afrer insert again: " << endl;
    //doing.insert(3, "close");
    cout << endl << "print after remove: " << endl;
    doing.remove("chop");
    for (auto i = doing.begin(); i != doing.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}