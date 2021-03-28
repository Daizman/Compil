#pragma once
#include "Token.hpp"
#include "Error.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class IOModule {
private:
	ifstream _input;
	ofstream _output;
public:
	Token& ReadNextToken() {
		return new Token();
	}
	void PrintErrors(vector<Error> errors) {
		for (auto error : errors) {
			cout << error.ToString() << endl;
		}
	}
	void OpenInput() {
	}
	void CloseInput() {
	}
	void OpenOutput() {
	}
	void CloseOutput() {
	}
	IOModule(string inPath, string outPath) {
		
	}
};