#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned int PRNG() {
    static unsigned int seed = 4541;
    seed = 8253729 * seed + 2396403;
    return seed;
}

int main() {
    vector<int> a(10);

    cout << "Generated numbers: ";
    for (int i = 0; i < 10; ++i) {
        a[i] = 1 + PRNG() % 100;   // 1–100
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a.begin(), a.end());

    auto min = min_element(a.begin(), a.end());
    auto max = max_element(a.begin(), a.end());
    cout << "Minimum element: " << *min << endl;
    cout << "Maximum element: " << *max << endl;

    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());

    cout << "Vector after removing duplicates: ";
    for (int x : a) cout << x << " ";
    cout << endl;
    return 0;
}

