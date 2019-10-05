#include "hash.h"

int main() {
    bool correct = 0;
    string choice;
    while (correct == 0) {
        cout << "Choose what you want to do:" << endl;
        cout << "1 - Hash my text" << endl;
        cout << "2 - Hash a text file" << endl;
        cout << "3 - Test hashing efficiency" << endl;
        cout << "4 - Test hashes collisions" << endl;
        cout << "5 - Test similar strings hashes bits difference" << endl;
        cin >> choice;
        if (choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5") {
            if (choice == "1") {
                cout << "Write your text:" << endl;
                string text;
                cin >> text;
                cout << "Hash: " << hash(text) << endl;
            }
            else if (choice == "2") {
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
            else if (choice == "3") {
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
            else if (choice == "4") {
                int length, count;
                cout << "Enter string pairs count: ";
                cin >> count;
                cout << "Enter strings length: ";
                cin >> length;
                vector<pair> strings = GenerateStringPairs(count, length);
                cout << "--------------------------" << endl;
                cout << "Collisions: " << CollisionsTest(strings) << endl;
            }
            else if (choice == "5") {
                int length, count;
                cout << "Enter string pairs count: ";
                cin >> count;
                cout << "Enter strings length: ";
                cin >> length;
                cout << "--------------------------" << endl;
                vector<pair> strings = GenerateSimilarStringPairs(count, length);
                bitTest difference = BitwiseTest(strings);
                cout << "Minimal difference: " << std::setw(5) << std::fixed << difference.min*100 << endl;
                cout << "Maximal difference: " << std::setw(5) << std::fixed << difference.max*100 << endl;
                cout << "Average difference: " << std::setw(5) << std::fixed << difference.avg*100 << endl;
            }
            correct = 1;
        }
        else {
            cout << "Invalid choice. Please select task by entering number from 1 to 5." << endl;
        }
    }
    return 0;
}
