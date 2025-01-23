#include <iostream>
#include <vector>
using namespace std;

class Yasir {
public:
    
    vector<string> allPalindromes(vector<string>& words) {
        vector<string> palindromes;  
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            string reversed = ""; 
            
            for (int j = word.size() - 1; j >= 0; j--) {
                reversed += word[j];
            }
            if (reversed == word) { 
                palindromes.push_back(word);
            }
        }
        return palindromes; 
    }
};

int main() {
    Yasir yasir; 
    vector<string> words = {"h", "level", "world", "noon"};

    
    vector<string> allResults = yasir.allPalindromes(words);  
    if (allResults.empty()) {
        cout << "No palindromes found" << endl;
    } else {
        cout << "All palindromes found: ";
        for (int i = 0; i < allResults.size(); i++) {
            cout << allResults[i] << " ";
        }
        cout << endl;
    }

    return 0;
}