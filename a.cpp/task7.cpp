#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    for (int i = 1; i <= 20; ++i) {
        numbers.push_back(i);
    }


    reverse(numbers.begin(), numbers.end());


    int evenCount = count_if(numbers.begin(), numbers.end(), [](int x) {
        return x % 2 == 0;
    });

    cout << "Number of even elements: " << evenCount << endl;


    auto newEnd = remove_if(numbers.begin(), numbers.end(), [](int x) {
        return x % 3 == 0;
    });
    numbers.erase(newEnd, numbers.end());


    cout << "Final vector: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

