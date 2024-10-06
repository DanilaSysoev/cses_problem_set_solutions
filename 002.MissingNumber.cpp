#include <cstdint>
#include <iostream>

using namespace std;

int main() {
    int64_t n;
    cin >> n;

    int64_t sum = 0;
    for(int i = 0; i < n - 1; ++i) {
        int32_t number;
        cin >> number;
        sum += number;
    }

    int64_t etalon = n * (n + 1) / 2;

    cout << etalon - sum << '\n';

    return 0;
}
