#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "Enter expression: ";
    cin >> expr;

    stack<char> s;
    bool isCorrect = true;

    for (int i = 0; i < expr.length(); ++i) {
        char ch = expr[i];

        if (ch == '(') {
            s.push(ch); // впихнуть в стек
        } else if (ch == ')') {
            if (!s.empty()) {
                s.pop(); // поп удаляет
            } else {
                isCorrect = false; 
                break;
            }
        }
    }

    if (!s.empty()) {
        isCorrect = false;
    }

    if (isCorrect) {
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}

