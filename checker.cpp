#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string file1_path = "/Users/rohit/Desktop/CP/output.txt";
    string file2_path = "/Users/rohit/Desktop/CP/expected.txt";

    ifstream file1(file1_path);
    ifstream file2(file2_path);

    if (!file1.is_open() || !file2.is_open()) {
        cout << "Error: Could not open one or both files." << endl;
        return 1;
    }

    string line1, line2;
    int line_number = 0;
    bool equal = true;

    while (true) {
        bool f1 = bool(getline(file1, line1));
        bool f2 = bool(getline(file2, line2));

        if (!f1 && !f2) break;

        line_number++;

        if (!f1 || !f2 || line1 != line2) {
            equal = false;
            cout << "Test case failed, index " << line_number << ":\n";
            cout << "output: " << (f1 ? line1 : "<NO LINE>") << "\n";
            cout << "expected: " << (f2 ? line2 : "<NO LINE>") << "\n\n";
        }
    }

    if (equal) {
        cout << "Test case passed!" << endl;
    }

    return 0;
}