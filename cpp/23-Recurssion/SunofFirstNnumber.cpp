#include<bits/stdc++.h>
using namespace std;

int sumS(int number) {
    if (number == 0) {
        return 0;
    } else {
        return number + sumS(number - 1); // Corrected logic
    }
}

int main() {
    cout << sumS(4); // This should output 10 (4 + 3 + 2 + 1)
    return 0;
}
