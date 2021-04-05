#pragma once
#include "Token.hpp"
#include "Error.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>


using std::string;
using std::vector;
using std::to_string;
using std::cout;
using std::ifstream;
using std::ofstream;


class IOModule {
private:
	string _iPath;
	string _oPath;
	ifstream _input;
	ofstream _output;
	int _curString;
	int _curPos;
public:
	char ReadNextString();
	void WriteNext();
	void PrintErrors(vector<Error>);
	void OpenInput();
	void CloseInput();
	void OpenOutput();
	void CloseOutput();
	int GetCurString();
	int GetCurPos();
	IOModule(string, string);
	~IOModule();
};