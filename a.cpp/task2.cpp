#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int x;
    for (int i = 0; i < 10; ++i) {
        cin >> x;
        s.insert(x);
    }

    cout << "Enter number to search: ";
    cin >> x;
    if (s.find(x) != s.end())
        cout << "Found\n";
    else
        cout << "Not found\n";

    cout << "Set elements: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}

