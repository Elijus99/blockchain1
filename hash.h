#pragma once
#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <vector>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::string;

char change_letter(char a);
string hash(string text);
bool exist(const string& fileName);
string InputFromFile(const string& fileName);
std::chrono::duration<double> HashingEfficiency(const string& fileName);
int CollisionsTest(const string& fileName);
#endif
