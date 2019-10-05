#pragma once
#ifndef STRING_GENERATOR_H_INCLUDED
#define STRING_GENERATOR_H_INCLUDED
#include <string>
#include <random>
#include <vector>
using std::string;
using std::vector;
struct pair {
    string first;
    string second;
};

vector<string> GenerateStrings(unsigned int count, unsigned int length);
vector<pair> GenerateStringPairs(unsigned int count, unsigned int length);
vector<pair> GenerateSimilarStringPairs(unsigned int count, unsigned int length);
#endif
