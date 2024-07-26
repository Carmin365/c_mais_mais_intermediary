#include <iostream>

using namespace std;

int main() {
    try {
        int x = 10, y = 0;
        int result = x / y;
        cout << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}