#pragma once
#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED
#include "StringGenerator.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <chrono>
#include <algorithm>
#include <numeric>  

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

char change_symbol(char a);
string hash(string text);
bool exist(const string& fileName);
string InputFromFile(const string& fileName);
std::chrono::duration<double> HashingEfficiency(const string& fileName);
int CollisionsTest(vector<pair> strings);
struct bitTest {
    double min;
    double max;
    double avg;
};
string CharToBinary(char c);
bitTest BitwiseTest(vector<pair> strings);
#endif
