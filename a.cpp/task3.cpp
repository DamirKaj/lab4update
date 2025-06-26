#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string text = "this is a test this is only a test";
    map<string, int> wordCount;
    string word;


    for (int i = 0; i < text.length(); ++i) {
        char ch = text[i];
        if (ch == ' ') {
            if (word != "") {
                wordCount[word]++;
                word = "";
            }
        } else {
            word += ch;
        }
    }

    if (word != "") {
        wordCount[word]++;
    }

    for (auto a = wordCount.begin(); a != wordCount.end(); ++a) {
        cout << a->first << " -> " << a->second << endl;
    }

    return 0;
}

