#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe";
    // getting length of string
    cout << phrase.length() << endl;
    cout << phrase[2] << endl;
    // setting a specific index
    phrase[0] = 'B';
    cout << phrase << endl;
    // first argument - string to search for
    // second argument - index to begin searching
    cout << phrase.find("raffe", 0) << endl;
    string phrasesub;
    // getting a substring, start and ending index specified
    phrasesub = phrase.substr(1, 3);
    cout << phrasesub << endl;

    return 0;
}
