#include "StringGenerator.h"

const char char_table[62]{ '0','1','2','3','4','5','6','7','8','9',
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

vector<string> GenerateStrings(unsigned int count, unsigned int length)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution <int> gen(0, 61);
    vector<string> strings;
    for (unsigned int i = 0; i < count; i++) {
        string temp = "";
        for (unsigned int j = 0; j < length; j++) {
            temp += char_table[gen(mt)];
        }
        strings.push_back(temp);
    }
    return strings;
}
vector<pair> GenerateStringPairs(unsigned int count, unsigned int length)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution <int> gen(0, 61);
    vector<pair> strings;
    for (unsigned int i = 0; i < count; i++) {
        pair temp;
        for (unsigned int j = 0; j < length; j++) {
            temp.first += char_table[gen(mt)];
            temp.second += char_table[gen(mt)];
        }
        strings.push_back(temp);
    }
    return strings;
}
vector<pair> GenerateSimilarStringPairs(unsigned int count, unsigned int length)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution <int> gen(0, 61);
    std::uniform_int_distribution <int> gen2(0, (length - 1));
    vector<pair> strings;
    for (unsigned int i = 0; i < count; i++) {
        pair temp;
        for (unsigned int j = 0; j < length; j++) {
            temp.first += char_table[gen(mt)];
        }
        temp.second = temp.first;
        unsigned int position = gen2(mt);
        char change = temp.second[position];
        do {
            change = char_table[gen(mt)];
        } while (temp.second[position] == change);
        temp.second[position] = change;
        strings.push_back(temp);
    }
    return strings;
}
