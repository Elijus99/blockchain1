#include "hash.h"

const char character_table[16]{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };

char change_letter(char a)
{
    int b;
    if (!(a >= 48 && a <= 57 || a >= 97 && a <= 102))
    {
        b = (int)a;
        b = b % 16;
        a = character_table[b];
    }
    return a;
}

string hash(string text)
{
    string defaultHash = "2a24399145f1a59ed7ea00b590fd480a";
    for (unsigned int i = 0; i < text.length(); i++) {
        for (unsigned int j = 0; j < defaultHash.length(); j++) {
            int magic1 = 17 * text[i] * text[i];
            int magicIndex = (i * j + text[i]) % defaultHash.length();
            int magicIndex2 = i * text[i] % defaultHash.length();
            defaultHash[j] = (defaultHash[j] + magic1 + i * j + j + ((defaultHash[magicIndex] * text[i] + text[0]) ^ (defaultHash[magicIndex2]))) % 128;
        }
    }
    for (unsigned int i = 0; i < defaultHash.length(); i++) {
        defaultHash[i] = change_letter(defaultHash[i]);
    }
    return defaultHash;
}
bool exist(const string& fileName)
{
    std::ifstream infile(fileName);
    return infile.good();
}
string InputFromFile(const string& fileName)
{
    std::ifstream in(fileName);
    std::stringstream buffer;
    buffer << in.rdbuf();
    return buffer.str();
}
std::chrono::duration<double> HashingEfficiency(const string& fileName)
{
        string line;
        std::vector<string> hashes;
        std::ifstream in(fileName);
        std::chrono::duration<double> totalTime = {};
        while (!in.eof()) {
            std::getline(in, line);
            auto start = std::chrono::high_resolution_clock::now();
            string temp = hash(line);
            auto end = std::chrono::high_resolution_clock::now();
            totalTime += (end - start);
        }
        return totalTime;
}
int CollisionsTest(const string& fileName)
{
    string line;
    int collisions = 0;
    std::vector<string> hashes;
    std::ifstream in(fileName);
    while (!in.eof()) {
        std::getline(in, line);
        hashes.push_back(hash(line));
    }
    for (int i = 1; i < hashes.size(); i++) {
        if (hashes[i - 1] == hashes[i]) {
            collisions++;
        }
    }
    return collisions;
}
