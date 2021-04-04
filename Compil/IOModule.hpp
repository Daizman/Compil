#pragma once
#include "Token.hpp"
#include "Error.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using std::string;
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
public:
	char ReadNextToken();
	void WriteNext();
	void PrintErrors(vector<Error>);
	void OpenInput();
	void CloseInput();
	void OpenOutput();
	void CloseOutput();
	IOModule(string, string);
	~IOModule();
};