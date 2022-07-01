#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Review{
    public:
        string title;
        int rating;
};
bool FillReview(Review &rr);
void ShowReview(const Review &rr);

int main(){
    vector<Review> books;
    Review temp;
    while(FillReview(temp)) books.push_back(temp);//push_back is from STL
    cout << "Thank you. You entered the following: " << endl;
    cout << "Rating\tBook" << endl;

    int num = books.size();//size is from STL
    for (int i = 0; i < num; i++)
    {
        ShowReview(books[i]);
    }
    cout << "Reprising: " << endl;
    cout << "Rating\tBook" << endl;

    vector<Review>::iterator pr;
    for ( pr = books.begin(); pr < books.end(); pr++)
    {
        ShowReview(*pr);
    }

    vector<Review> oldlist(books);//copy constructor using
    if (num > 3)
    {
        //delete two elements
        books.erase(books.begin() + 1, books.begin()+3);
        for (pr = books.begin(); pr < books.end(); pr++)
        {
            ShowReview(*pr);
        }
        //paste one element
    }
    
    

    return 0;
}

bool FillReview(Review &rr)
{
    cout << "Enter book title (quit to quit): ";
    getline(cin,rr.title);
    if (rr.title == "quit") return false;
    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (!cin) return false;
    cin.get();
    return true;
}

void ShowReview(const Review &rr){
    cout << rr.rating << "\t" << rr.title << endl;
}