// Palindrom 25.07.2014
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    unsigned int num_words = 4;
    vector<string>words; // array of words
    string word_1; // temp array for word
    string a; // array for compare
    string b; // array for compare
    for(size_t i = 0; i < num_words; ++i)
    {
        cout << "Please, Enter the word: ";
        cin >> word_1;
        if(!(word_1.empty()))
        {
            for(size_t z = 0; z < word_1.size(); ++z)
                a.push_back(std::tolower(word_1.at(z)));
            for(size_t z = a.size(); z > 0; --z)
                b.push_back(a.at(z - 1));
        }
        if(a == b)
            words.push_back(a);
        a.clear(); b.clear();
    }
    cout << "Palindroms: \n";
    if(!words.empty())
        for(auto x : words) cout << x << endl;
    else cout << "No palindroms!" << endl;
    cout << "Done!";
    return 0;
}
