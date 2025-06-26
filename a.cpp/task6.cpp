#include <iostream>
#include <vector>
using namespace std;

double average(vector<int>& v) {
    if (v.empty()) return 0; //это что бы проверить на пустоту,и если пустое не делить на ноль

    int sum = 0;
    for (auto a = v.begin(); a != v.end(); ++a) {
        sum += *a;
    }

    return static_cast<double>(sum) / v.size();
}
s
int main() {
    int n, x;
    vector<int> numbers;

    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> x;
        numbers.push_back(x);
    }

    double avg = average(numbers);
    cout << "Average: " << avg << endl;

    return 0;
}
