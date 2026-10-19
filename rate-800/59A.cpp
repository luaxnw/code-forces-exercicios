#include <iostream>
#include <string>
using namespace std;

int main()
{

    string word;
    int upperCase = 0, lowerCase = 0;

    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 97 && word[i] <= 122)
            lowerCase++;
        if (word[i] >= 65 && word[i] <= 90)
            upperCase++;
    }

    for (int i = 0; i < word.size(); i++)
    {
        char c = word[i];
        if (lowerCase >= upperCase)
            word[i] = (char)tolower(c);
        else
            word[i] = (char)toupper(c);
    }

    cout << word << endl;

    return 0;
}
