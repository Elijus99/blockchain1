#include "hash.h"

int main() {
    cout << "Choose what you want to do:" << endl;
    cout << "1 - Hash my text" << endl;
    cout << "2 - Hash a text file" << endl;
    cout << "3 - Test hashing efficiency" << endl;
    cout << "4 - Test hashes collisions" << endl;
    cout << "5 - Test similar strings hashes bits difference" << endl;

    bool correct = 0;
    char choice;
    while (correct = 0) {
        cin >> choice;
        if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5') {
            if (choice == '1') {
                cout << "Write your text:" << endl;
                string text;
                cin >> text;
                cout << "Hash: " << hash(text) << endl;
            }
            else if (choice == '2') {
                cout << "Write the name of the text file (with .txt):" << endl;
                string filename;
                cin >> filename;
                if (exist(filename)) {
                    cout << "Hash: " << hash(InputFromFile(filename));
                }
                else {
                    cout << "---File '" << filename << "' was not found---" << endl;
                }
            }
            else if (choice == '3') {
                cout << "Write the name of the testing text file (with .txt)" << endl;
                string filename;
                cin >> filename;
                if (exist(filename)) {
                    cout << "Summed up hashing time: " << (HashingEfficiency(filename)).count() << endl;
                }
                else {
                    cout << "---File '" << filename << "' was not found---" << endl;
                }
            }
            else if (choice == '4') {
                cout << "Write the name of the testing text file (with .txt)" << endl;
                string filename;
                if (exist(filename)) {
                    cout << "Collisions: " << CollisionsTest(filename) << endl;
                }
                else {
                    cout << "---File '" << filename << "' was not found---" << endl;
                }
            }
            else if (choice == '5') {
                cout << "Write the name of the testing text file (with .txt)" << endl;
                string filename;
                if (exist(filename)) {
                    
                }
            }
        }
    }
    return 0;
}
