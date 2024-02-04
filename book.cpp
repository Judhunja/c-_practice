#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        // if we dont pass anything(default)
        Book() {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        // constructor
        Book(string Title, string Author, int Pages) {
            title = Title;
            author = Author;
            pages = Pages;
        }
};


int main()
{
    Book book1("Harry", "Jk", 500);
    book1.title = "Kayala";

    // no parameters
    Book book2;

    cout << book1.pages << endl;
    cout << book1.title << endl;
    // print "no title"
    cout << book2.title << endl;

    return 0;
}
