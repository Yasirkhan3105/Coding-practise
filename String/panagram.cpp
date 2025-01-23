#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

class yasir {
public:
    bool ispangram(string sentence) {
        unordered_set<char> alphabet;
        for (int i = 0; i < sentence.size(); ++i) {
            char c = sentence[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                c = tolower(c);     
                alphabet.insert(c);
            }
        }
        return (alphabet.size() == 26);
    }
};

int main() {
    yasir y;
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    if (y.ispangram(sentence)) {
        cout << "'" << sentence << "' is a pangram." << endl;
    } else {
        cout << "'" << sentence << "' is not a pangram." << endl;
    }
    return 0;
}
