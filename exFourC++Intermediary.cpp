#include <fstream>

using namespace std;

int main() {
    ofstream file("my_file.txt");
    file << "Programming!" << endl;
    file.close();
    return 0;
}

