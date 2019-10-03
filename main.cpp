#include "hash.h"

int main() {
    string text;
    InputFromFile("test/test1-1.txt", text);
    string hashed = hash(text);
    cout << "Hash: " << hashed << endl;
    string text1;
    InputFromFile("test/test1-2.txt", text1);
    string hashed1 = hash(text1);
    cout << "Hash: " << hashed1 << endl;
    /*InputFromFile("test/test1-2.txt", text);
    string hashed1 = hash(text);
    cout << "Hash: " << hashed1 << endl;*/
    /*int collisions;
    collisions = ReadLineByLine("test/test1m.txt");
    cout << "Collisions: " << collisions << endl;*/
    return 0;
}
