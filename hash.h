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

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

char change_letter(char a);
string hash(string text);
bool exist(const string& fileName);
void InputFromFile(const string& fileName, string& text);
int ReadLineByLine(const string& fileName);
#endif
